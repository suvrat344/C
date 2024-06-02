// Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.

#include <stdio.h>

int main(){
  int num1,num2;
  char operator;

  printf("Enter first number : ");
  scanf("%d",&num1);

  printf("Enter second number : ");
  scanf("%d",&num2);

  printf("Enter operator : ");
  scanf(" %c",&operator);

  switch (operator)
  {
  case '+':
    printf("%d %c %d = %d",num1,operator,num2,num1 + num2);
    break;
  case '-':
    printf("%d %c %d = %d",num1,operator,num2,num1 - num2);
    break;
  case '*':
    printf("%d %c %d = %d",num1,operator,num2,num1 * num2);
    break;
  case '/':
    printf("%d %c %d = %d",num1,operator,num2,num1 / num2);
    break;
  default:
    printf("Not valid operation");
    break;
  }

  return 0;
}
