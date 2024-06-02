// Create a program using recursion to check if a number is a palindrome using recursion

#include <stdio.h>

int reverse(int num,int reverseNum){
  if(num == 0){
    return reverseNum;
  }
  else{
    return reverse(num / 10,reverseNum * 10 + num % 10);
  }
}

void isPallindrome(int num){
  int reverseNum = reverse(num,0);
  if(reverseNum == num){
    printf("%d is Pallindrome Number.",num);
  }
  else{
    printf("%d is not Pallindrome Number.",num);
  }
}


int main(){
  int number;

  printf("Enter number : ");
  scanf("%d",&number);

  isPallindrome(number);

  return 0;
}