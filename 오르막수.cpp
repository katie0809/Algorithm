#include <stdio.h>
#include <string.h>
#define MOD 10007

int board[10][1111];

int solve(int row, int col){
  //(열)로 시작되는 (행)길이의 오르막 수

  if(col == 0) return 0;
  if(col == 1) return 1;

  int &ret = board[row][col];

  if(ret != -1) return ret;

  ret = 0;

  for(int i = row; i<10; i++)
    ret += solve(i, col-1) % MOD;

  return ret;
}

int main(){

  int N;
  scanf("%d", &N);
  memset(&board, -1, sizeof(board));
  long long int sum = 0;
  for(int j = 0; j<10; j++){
    sum += solve(j, N)%MOD;
  }
  printf("%d\n", sum%MOD);
}
