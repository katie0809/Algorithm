#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int wine[11111]; //각 잔에 들어있는 포도주의 양
int board[11111]; //k개의 잔이 있을 때 마실 수 있는 포도주의 최대 양

int solve(int idx){

  if(idx == 1)
    return wine[1];
  if(idx == 2)
    return wine[1]+wine[2];

  int &ret = board[idx];

  if(ret != -1) return ret;

  ret = max(solve(idx-3) + wine[idx-1] + wine[idx], solve(idx-2) + wine[idx]);
  ret = max(ret, solve(idx-1));

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
