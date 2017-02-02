#include <stdio.h>
#include <string.h>

long long int memo[99];

long long int solve(int idx){

  if(idx == 1 || idx == 2)
    return 1;

  long long int &ret = memo[idx];
  if(ret != -1) return ret;

  ret = solve(idx-1) + solve(idx-2);
  return ret;
}

int main(){

  memset(&memo, -1, sizeof(long long int)*99);
  int N;
  scanf("%d", &N);

  printf("%lld\n", solve(N));
}
