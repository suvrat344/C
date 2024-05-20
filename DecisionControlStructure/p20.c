// Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).

#include <stdio.h>

int main(){
  int score;

  printf("Enter score : ");
  scanf("%d",&score);

  score >= 80 ? printf("High") 
              : score >= 50 
                ? printf("Moderate") 
                : printf("Low");

  return 0;
}