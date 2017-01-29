#include <stdio.h>
#include <algorithm>
#include <string>

int board[1111111];

int min(int a, int b){
  if(a<b) return a;
  else return b;
}

int solve(int idx){

  //기저조건
  if(idx == 1)
    return 0;
  if(idx == 2)
    return 1;
  if(idx == 3)
    return 1;

  int &ret = board[idx];
  if(ret != 0)
    return ret;
  //방문된 적 있다면 계산되어있는 값을 반환

  if(idx % 3 == 0)
    ret = min(solve(idx-1) + 1,solve(idx/3) + 1);
  else if(idx % 2 == 0)
    ret = min(solve(idx-1)+1, solve(idx/2) + 1);
  else ret = solve(idx-1) + 1;

  return ret;

}

int main(){

  int N;
  scanf("%d", &N);

  printf("%d", solve(N));
}
