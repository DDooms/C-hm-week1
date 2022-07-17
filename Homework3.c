#include <stdio.h>
#include <string.h>

void DecToBin(){
    //DEC to BIN
    char binary[256];
    int decimal; int length = 0;
    scanf("%d", &decimal);
    
    do
    {
        if (decimal % 2 == 0) binary[length] = '0';
        else binary[length] = '1';
        decimal /= 2;
        length++;  
    } while (decimal != 0);

    binary[length] = '\0';

    int middle = length/2;
    char temp;
    for (size_t i = 0; i < middle; i++)
    {
        temp = binary[i];
        binary[i] = binary[length-i-1];
        binary[length-i-1] = temp;
    }
    printf("\nBinary number: %s\n", binary);
}

int BinToDec(char *string){
    int slen = strlen(string);
    int total = 0; 
    int decval = 1;

    for (int i = slen - 1; i >= 0; i--)
    {
        if (string[i] == '1') total += decval;
        decval *=2;
    }
    return total;
    
}

int main(){
    DecToBin();
    char s[] = "10000001";
    int val = BinToDec(s);
    printf("s in dec: %d\n", val);

    return 0;
}