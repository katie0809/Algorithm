#include <stdio.h>

int min(int a, int b){
  if(a<b) return a;
  else return b;
}

int main(){

  int a, b, num_two = 0, num_five = 0;
  scanf("%d %d", &a, &b);

  for(int i = a; i>b; i--){

    int tmp = i;
    printf("hello");
    while(i % 2 == 0){
      num_two++;
      i /=  2;
    }
    i = tmp;
    while(i % 5 == 0){
      num_five++;
      i /=  5;
    }
    i = tmp;
  }
  printf("%d\n", min(num_five, num_two));
}
