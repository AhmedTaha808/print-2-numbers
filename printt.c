#include <stdio.h>

int main(){
    int num1 , num2;
    char operation;
    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    printf("enter the operation: ");
    scanf(" %c", &operation);
    printf("the resault is: ");
    if (operation == '+')
        printf("%d", num1 + num2);
    else if (operation == '-')
        printf("%d", num1 - num2);
    else if (operation == '*')
        printf ("%d", num1 * num2);
    else if (operation == '/' && num2 != 0)
        printf ("%d", num1 / num2);
    else
        printf ("invalid input");
}
