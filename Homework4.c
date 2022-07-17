#include <stdio.h>
#include <stdint.h>

int setBit(uint32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return 1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    mask[index] |= (1ull << b);
    return 0;
}

int clearBit(uint32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return 1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    mask[index] &= ~(1ull << b); 
    return 0;
}

int flipBit(uint32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return 1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    mask[index] ^= (1ull << b);
    return 0; 
}

int checkBit(uint32_t *mask, size_t n, size_t bit){
    if (n * sizeof(*mask)*__CHAR_BIT__ <= bit){
        return -1;
    }
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int b = bit % (sizeof(*mask) * __CHAR_BIT__);
    return !!(mask[index] & (1ull << b)); 
}

void printMask(uint32_t* mask, size_t n){
    for (int i = n * sizeof(*mask) * __CHAR_BIT__ - 1; i >= 0; i--){
        printf("%2d ", i);
    }
    putchar('\n');
    for (int i = n * sizeof(*mask) * __CHAR_BIT__ - 1; i >= 0; i--){
        printf("%2d ", checkBit(mask, n, i));
    }
    putchar('\n');
}

#define LEN 2

int main(){
    uint32_t attendance = 0;
    int option;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {
             setBit(attendance, LEN, 31);
        }
        else if (option == 2)
        {
            clearBit(attendance, LEN, 2);
        }
        else if (option == 3)
        {
           printMask(attendance, 32);
        }
        else if (option == 4)
        {
           flipBit(attendance, LEN, 2);
        }
        else if (option == 5)
        {
           break;
        }
    }
    return 0;
}