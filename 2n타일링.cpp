#include <stdio.h>
#include <string.h>

int chk[1111];//n개의 타일을 채울 수 있는 경우의 수 적어놓는다

void solve(int n){//n개의 타일을 채울 수 있는 경우의 수

  if(n == 1)
    return 1;
  if(n == 2)
    return 2;

  int &ret = chk[n];

  if(chk[n] != -1)
    return ret;
  else {
    ret = solve(n-1) + solve(n-2);
  }
}

int main(){

  memset(-1, chk, sizeof(chk));
  int n;

  chk[0] = 0;
  chk[1] = 1;
  chk[2] = 2;

  scanf("%d", &n);
  solve(n);

}
