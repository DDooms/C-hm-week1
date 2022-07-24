#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int secondMax(const int* arr, size_t size){
    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i=0; i< size ; i++)
    {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1) max2 = arr[i];
    }
    printf("Second largest = %d\n", max2);
}

unsigned sumArrayDigits(const int* arr, size_t size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        int current = arr[i];
        while (current != 0) {
            sum += (current % 10);
            current /= 10;
        }
    }
    printf("Sum of the array = %d\n",sum);
}

int main(){
    int arr[] = {12, 34, 5, 70, 46 };
    secondMax(arr, 5);
    sumArrayDigits(arr, 5);


    return 0;
}