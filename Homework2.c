#include <stdio.h>
#include <stdlib.h>

#define BSIZE 1024

int main(){
    //Ex.1
    // FILE *fileWrite = fopen("numbers.txt", "w");
    // double a, b, c;
    // scanf("%lf %lf %lf", &a, &b, &c);

    // fprintf(fileWrite, "%.2f\n%.2f\n%.2f\n", a, b, c);
    // fclose(fileWrite);

    // FILE *file = fopen("numbers.txt", "r");
    // char buffer[BSIZE];
    // double current, max;
    // int numbers = 0;

    // if (file == NULL)
    // {
    //     printf("Error, opening file.\n");
    //     return 1;
    // }

    // while (fgets(buffer, BSIZE, file) != NULL)
    // {
    //     current = atof(buffer);
    //     if (numbers == 0) max = current;
    //     else if (current>max) max = current;
        
    //     numbers++;
    // }

    // printf("Largest number is: %.2f\n", max);
    // fclose(file);

    //Ex. 2
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    printf("a^b^c = %d\n", a^b^c);

    //Ex. 3
    // FILE *fileWrite = fopen("numbers.txt", "w");
    // double a, b, c;
    // scanf("%lf %lf %lf", &a, &b, &c);

    // fprintf(fileWrite, "%.2f\n%.2f\n%.2f\n", a, b, c);
    // fclose(fileWrite);

    // FILE *file = fopen("numbers.txt", "r");
    // char buffer[BSIZE];
    // double current, max, min;
    // int numbers = 0;

    // if (file == NULL)
    // {
    //     printf("Error, opening file.\n");
    //     return 1;
    // }
    //Biggest
    // while (fgets(buffer, BSIZE, file) != NULL)
    // {
    //     current = atof(buffer);
    //     if (numbers == 0) max = current;
    //     else if (current>max) max = current;
        
    //     numbers++;
    // }
    //Smallest
    // while (fgets(buffer, BSIZE, file) != NULL)
    // {
    //     current = atof(buffer);
    //     if (numbers == 0) min = current;
    //     else if (current<min) min = current;
        
    //     numbers++;
    // }

    // printf("Largest number is: %.2f\n", max);
    //printf("Smallest number is: %.2f\n", min);
    // fclose(file);

    return 0;
    
}