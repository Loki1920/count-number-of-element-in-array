/* count the number of element in array */

#include<stdio.h>

int main(){
  int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};

  printf(" number of element is : %ld ", sizeof(a) / sizeof(a[0]));
  return 0;
}