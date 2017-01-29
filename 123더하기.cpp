#include <stdio.h>
#include <string.h>

int board[15];

int solve(int idx){

  //기저조건
  if(idx == 1)
    return 1;
  if(idx == 2)
    return 2;
  if(idx == 3)
    return 4;

  int &ret = board[idx];

  if(ret != -1) return ret;

  ret = solve(idx-1) + solve(idx-2) + solve(idx-3);
  return ret;
}

int main(){

  int N;
  scanf("%d", &N);
  memset(&board, -1, sizeof(int)*15);
  for(int i = 0 ; i<N; i++){
    int tmp = 0;
    scanf("%d", &tmp);
    printf("%d\n", solve(tmp));
  }
}
