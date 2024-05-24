// Create a program to merge two sorted arrays

#include <stdio.h>

void merged_array(int arr1[],int arr2[],int size1,int size2,int merged_arr[]){
  int i=0,j=0,k=0;

  while (i < size1 && j < size2)
  {
    if(arr1[i] < arr2[j]){
      merged_arr[k++] = arr1[i++];
    }
    else{
      merged_arr[k++] = arr2[j++];
    }
  }
  
  while(i < size1){
    merged_arr[k++] = arr1[i++];
  }

  while(j < size2){
    merged_arr[k++] = arr2[j++];
  }
  
}



int main(){
  int arr1[] = {1,2,5,7},arr2[] = {6,8,9,10},size1,size2;

  size1 = sizeof(arr1)/sizeof(arr1[0]);
  size2 = sizeof(arr2)/sizeof(arr2[0]);

  int merged_arr[size1 + size2];

  merged_array(arr1,arr2,size1,size2,merged_arr);

  printf("Print Merged Array\n");
  for (int i = 0; i < size1 + size2; i++)
  {
    printf("%d ",merged_arr[i]);
  }
  
  return 0;
}