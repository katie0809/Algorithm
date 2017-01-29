#include <stdio.h>
#include <string.h>

int board[10][111]; //(열)을 시작으로 하는 (행)자리 자연수
int N;

int main(){

  memset(&board, -1, sizeof(int)*111);
  for(int i = 0; i<10; i++)
    {
      board[i][0] = 0;
      board[i][1] = 1;
    }board[0][1] = 0;

  scanf("%d", &N);
  for(int i = 2; i<=N; i++){
    for(int j = 0; j<10; j++){
      if(j == 0){
        board[j][i] = board[j+1][i-1];
        continue;
      }
      if(j == 9){
        board[j][i] = board[j-1][i-1];
        continue;
      }
      board[j][i] = (board[j-1][i-1] + board[j+1][i-1]) % 1000000000;
    }
  }
  long long int sum = 0;
  for(int i = 0; i<10; i++)
  { int tmp = (board[i][N] % 1000000000);
    sum += tmp;}
  printf("%d",sum % 1000000000);
}
