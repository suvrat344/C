// Use a 2-D character array to store and display a tic-tac-toe board

#include <stdio.h>

int main(){
  char tic_tac_toe[3][3] = {
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
  };


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(i == j){
        tic_tac_toe[i][j] = 'X';
      }
      else{
        tic_tac_toe[i][j] = '0';
      }
    }
    printf("\n");
  }

  // Print Tic-Tac-Toe Board
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j < 2)
      {
        printf(" %c |",tic_tac_toe[i][j]);
      }
      else{
        printf(" %c ",tic_tac_toe[i][j]);
      }  
    }
    if (i < 2)
    {
      printf("\n---+---+---\n");
    }  
  }
  
  return 0;
}