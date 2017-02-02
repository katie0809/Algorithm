#include <stdio.h>

int min(int a, int b){
  if(a<b) return a;
  else return b;
}

int main(){

  int N;
  scanf("%d", &N);
  int num_two = 0, num_five = 0;

  num_two = N / 2;
  num_five = N / 5;
  printf("%d\n", min(num_five, num_two));
}
