#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

const double PI=3.1415926535897932384650288;

float simple_sqrt(float num)
{
    int i = 10;
    float x = num /2;
    while (i-- && num) x = ((num /x) + x) /2;
    return x;
}

double sin(double x){
  double sign=1;
  if (x<0){
    sign=-1.0;
    x=-x;
  }
  if (x>360) x -= (int)(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=x;
  int k=1;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }

  return sign*res;
}
#define TINT 1
#define TDOUBLE 6
#define TCHAR 'A'
#define TFLOAT 3
#define TUINT8 4
#define TUINT16 5
#define TUINT32 6
#define TUINT64 7

void printValue(const void* valuePtr, uint8_t flag){
  if (flag == TINT) printf("Value:  %d\n", *(int*)valuePtr);
  else if (flag == TDOUBLE ) printf("Value:  %lf\n", *(double*)valuePtr);
  else if (flag == TCHAR ) printf("Value:  %c\n", *(char*)valuePtr);
  else if (flag == TFLOAT ) printf("Value:  %.2f\n", *(float*)valuePtr);
  else if (flag == TUINT8 ) printf("Value:  %d\n", *(uint8_t*)valuePtr);
  else if (flag == TUINT16 ) printf("Value:  %d\n", *(uint16_t*)valuePtr);
  else if (flag == TUINT32 ) printf("Value:  %u\n", *(uint32_t*)valuePtr);
  else if (flag == TUINT64 ) printf("Value:  %lu\n", *(uint64_t*)valuePtr);
  else printf("Cant recognise this flag!\n");
  //като бях сложил на define tdouble и tfloat реални числа, tuint32 изкарваше правилна стойност, 
  //сложих после цяло число на tfloat и tdouble и сега tuint32 не работи
}

unsigned bitsNCount(unsigned count, unsigned bitscnt, ...){
  va_list args;
  va_start(args, count);
  unsigned int count2 = 0;
  uint32_t value;
  for (size_t i = 0; i < count; i++) {
    value = va_arg(args, uint32_t);
      while (value != 0) {
        if ((value & 1) == 1) count2++;
        value >>= 1;
      }
  }
  va_end(args);
}

int main(){
    // float num = simple_sqrt(400);
    // double num2 = sin(1231);
    // printf("%.2f\n%.2f\n", num, num2);



    // int num = 23;
    // double num2 = 5.12313;
    // char symbol = 'B';
    // float num3 = 2.5;
    // uint8_t num4 = 11;
    // uint16_t num5 = 12;
    // uint32_t num6 = 13;
    // uint64_t num7 = 14;
    // printValue(&num, TINT);
    // printValue(&num2, TDOUBLE);
    // printValue(&symbol, TCHAR);
    // printValue(&num3, TFLOAT);
    // printValue(&num4, TUINT8);
    // printValue(&num5, TUINT16);
    // printValue(&num6, TUINT32);
    // printValue(&num7, TUINT64);


    printf("%d\n", bitsNCount(4, 2, 0x0a, 0xff, 0, 1)); 

    return 0;
}