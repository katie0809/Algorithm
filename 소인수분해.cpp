#include <stdio.h>
int memo[111111];

int prime(int n){

  if(n == 1) return 0;

  for(int i = 2; i*i<=n; i++){
    if(n%i == 0){
      return 0;
    }else continue;
  }
  return 1;
}

void solve(int N){

  for(int i = 2, j = 0; i*i <= N; i++){
    if(prime(i) == 1) {
      memo[j] = i;
      j++;
    }
    else continue;
  }
}


int main(){

  int N;
  scanf("%d", &N);
  if(N == 1) return 0;
  if(N == 2 || N == 3){
    printf("%d", N);
    return 0;
  }
  solve(N); //N까지의 소수를 찾아둔다

  while(1){
      for(int i = 0; i*i<=N; i++){
        if(N % memo[i] == 0){
          printf("%d\n", memo[i]);
          N /= memo[i];
          break;
      }
    }
    if(N <= 1) break;
  }
  return 0;
}
