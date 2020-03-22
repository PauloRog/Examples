#include <stdio.h>

void selectionSort(int vector[], int length);
void swap(int *x, int *y);

int main()
{
  /*code */
  return 0;
}

void swap(int *x, int *y){
  int help;
  help = *x;
  *x = *y;
  *y = help;
}

void selectionSort(int vector[], int length){
  int i, j, small;

  for(i=0; i<length-1; i++){
    small = i;
    for(j=i+1; j<length; j++){
      if(vector[j]<vector[small]){
        small = j;
      }
    }
    swap(&vector[i], &vector[small]);
  }
}
