#include <stdio.h>

int solve(int n){

  if(n == 1) return 0;

  for(int i = 2; i*i<=n; i++){
    if(n%i == 0){
      return 0;
    }else continue;
  }
  return 1;
}

int main(){

  int a, b;
  scanf("%d %d", &a, &b);
  for(int i = a; i<=b; i++){
    if(solve(i) == 1){
      //i가 소수라면
      printf("%d\n", i);
    }
  }
}
