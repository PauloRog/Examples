#include <stdio.h>
#define MAX 100

void insertionSort(int vector[], int length);

int main()
{
  /* code */
  return 0;
}

void insertionSort(int vector[], int length){
  int i, j, help;

  for(i=1; i<length; i++){
    help = vector[i];
    for(j=i-1; j>=0&&vector[j]>help; j--){
      vector[j+1] = vector[j];
    }
    vector[j+1] = help;
  }
}
