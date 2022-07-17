#include <stdio.h>

int main(){

  double firstNum, secondNum;
  char operator;
  char command[10] = "";
  printf("EOF is the command for the calculator exit\n");

  while (command != "EOF")
  {
    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &operator);

    printf("Enter first and second num: \n");
    scanf("%lf %lf", &firstNum, &secondNum);
    fflush(stdin);
    

        switch (operator) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf", firstNum, secondNum, firstNum + secondNum);
                break;
            case '-':
                printf("%.2lf + %.2lf = %.2lf", firstNum, secondNum, firstNum - secondNum);
                break;
            case '*':
                printf("%.2lf + %.2lf = %.2lf", firstNum, secondNum, firstNum * secondNum);
                break;
            case '/':
                printf("%.2lf + %.2lf = %.2lf", firstNum, secondNum, firstNum / secondNum);
                break;
            default:
                printf("Error! operator is not correct\n");
        }
    printf("\nIf you want to continue, enter a key.\nIf you want to exit, type 'EOF'\n");
    fflush(stdin);
    scanf("%s", command);
  }
  
  
  

  return 0;
}