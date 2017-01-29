#include <stdio.h>
#include <string.h>

int wine[11111]; //각 잔에 들어있는 포도주의 양
int board[11111]; //k개의 잔이 있을 때 마실 수 있는 포도주의 최대 양
int N;

int max(int a, int b){
  if(a<b) return b;
  else return a;
}

int solve(int idx){

  if(idx == 0)
    return 0;
  if(idx == 1)
    return wine[1];
  if(idx == 2)
    return wine[1]+wine[2];

  int &ret = board[idx];

  if(ret != -1) return ret;


  else if(idx == 3){
    ret = max(ret, wine[1] + wine[2]);
    ret = max(ret, wine[2] + wine[3]);
    ret = max(ret, wine[1] + wine[3]);
  }
  else{
    for(int i = 2; i<idx-1; i++)
      ret = max(ret, solve(idx-i) + solve(i));
  }printf("[%d] %d\n", idx, ret);
  return ret;

}

int main(){

  int N;
  scanf("%d", &N); //포도주잔의 개수
  memset(&board, -1, sizeof(board));
  for(int i = 1; i<=N; i++){
    scanf("%d", &wine[i]);
  }
  printf("%d\n", solve(N));

}
