#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int N;
long long int memo[111111]; //해당 인덱스 열까지의 스티커를 뗄 수 있는 최대값
int board[2][111111]; //해당 인덱스의 스티커의 점수

long long int solve(int idx, int up_down){

  if(idx == 1 && up_down == -1)
    return board[0][1];
  //이전 스티커가 오른쪽 아래를 뜯음

  if(idx == 1 && up_down == 1)
    return board[1][1];
  //이전 스티커가 오른쪽 위를 뜯음

  long long int &ret = memo[idx];
  if(ret != -1) return ret;

  if(up_down == -1){
    ret = max(solve(idx-1,-1)-board[1][idx-1] + board[1][idx], solve(idx-1, 1) + board[0][idx]);
  }
  if(up_down == 1){
    ret = max(solve(idx-1,1)-board[0][idx-1] + board[0][idx], solve(idx-1, -1) + board[1][idx]);
  }
  return ret;

}

int main(){

  int test_case;
  scanf("%d", &test_case);
  memset(&memo, -1, sizeof(long long int)*111111);
  for(int i = 0; i<test_case; i++){
    scanf("%d", &N);
    for(int k = 0; k<2; k++)
    {
      for(int j = 1; j<=N; j++){
      scanf("%d", &board[k][j]);
      }
    }
  long long int a = 0;
  a = solve(N, 1);
  memset(&memo, -1, sizeof(long long int)*111111);
  long long int b = 0;
  b = solve(N, -1);
  printf("%lld\n", max(a,b));
  memset(&memo, -1, sizeof(long long int)*111111);
  memset(&board, 0, sizeof(int)*222222);
  }


}
