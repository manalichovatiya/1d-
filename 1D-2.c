#include <stdio.h>
int main(){
  
  int numbers[] = {112,213,21,7,7876,765,6566,122,123,32,34,345,23,23,2134,324134,213};

  int a = sizeof(numbers);
  int i= sizeof(numbers[0]);
 
  int length = a/i;

  printf("Length of array : %d \n", length);
  return 0;
}
