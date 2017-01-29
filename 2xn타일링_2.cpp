// #include <stdio.h>
//
// /*
// 2x1인경우 세우면 n-1칸 남음
// 눕히면 n-2칸 남음
// 2X2인경우 n-2칸 남음
// */
//
// int solve(int n){//n번째 칸의 타일이 올 수 있는 경우의수
//
//   int ret;
//
//   if(n == 1) return 3;
//   if(n == 2) return
//
//   ret = 2*solve(n-2) + solve(n-1);
// }
#include <stdio.h>
#include <string.h>

int board[1111];

int solve(int idx){

  if(idx == 1)
    return 1;
  if(idx == 2)
    return 3;

  int &ret = board[idx];
  if(ret != -1){
    //탐색된 적이 있다면
    return ret;
  }

  ret = (solve(idx-1) + 2*solve(idx-2))%10007;

  return ret;
}

int main(){

  memset(&board, -1, sizeof(int)*1111);

  int N;
  scanf("%d", &N);
  printf("%d\n", solve(N));

  return 0;
}
