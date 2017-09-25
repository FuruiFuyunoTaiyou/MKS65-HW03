#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int first_array[10];
  int i = 0;
  for(; i < 10; i++){
    first_array[i] = rand();
  }
  first_array[9] = 0;
  printf("first array: [");
  for(i = 0; i < 10; i++){
    printf("%d, ", first_array[i]);
  }
  printf("]\n");

  int second_array[10];
  int *firstp = first_array + 9;
  int *secondp = second_array;
  for(i = 0; i < 10; i++){
    *(secondp + i) = *(firstp - i);
  }
  printf("second array: [");
  for(i = 0; i < 10; i++){
    printf("%d, ", second_array[i]);
  }
  printf("]\n");

  return 0;
}
