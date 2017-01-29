#include <stdio.h>
#include <stdlib.h>

int fibonacci[22];
int n;

int main(){

  scanf("%d", &n);

  fibonacci[0] = 0;
  fibonacci[1] = 1;
  int i = 2;

  for(int j = 0; j < n-1; j++, i++)
    fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];

  printf("%d", fibonacci[n]);
}
