#if 0
#include <stdio.h>

int main(){

  int N, M;
  scanf("%d %d", &N, &M);
  int i = N;

  for(i = N; i>0; i--){
    if(M % i == 0){
      if(N % i == 0){
        printf("%d\n", i);
        break;
      }
    }else continue;
  }

  printf("%d", i*(N/i)*(M/i));

  return 0;
}
#endif

//최소공배수 문제
#include <stdio.h>

void solve(int N, int M){

  int i = 0;

  for(i = N; i>0; i--){
    if(M % i == 0){
      if(N % i == 0){
        break;
      }
    }else continue;
  }

  printf("%d\n", i*(N/i)*(M/i));
}

int main(){

  int T, N, M;
  scanf("%d", &T);
  while(T--){
    scanf("%d %d", &N, &M);
    solve(N, M);
  }
}
