#include <stdio.h>

void bubbleSort(int vector[], int length);
void swap(int *x, int *y);

int main()
{
  /* code */
  return 0;
}

void swap(int *x, int *y){
  int help;
  help = *x;
  *x = *y;
  *y = help;
}

void bubbleSort(int vector[], int length){
  int i, j;

  for(i=length-1; i>0; i--){
    for(j=0; j<i; j++){
      if(vector[j]>vector[j+1]){
        swap(&vector[j], &vector[j+1]);     
      }
    }
  }
}
