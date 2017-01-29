#include <stdio.h>
#include <algorithm>
#include <string.h>
#pragma warning (disable:4996)
using namespace std;

int N; //해빈이가 가진 붕어빵개수
int d[11111];
//idx개 팔 때의 붕어빵가격
int s[11111];
int solve(int idx){
  //idx개를 세트로 포함하는 수익 중 가장 큰 경우를 리턴
  if(idx == 0)
    return 0;
  if(idx == 1)
    return d[1];

  int &ret = s[idx];
  printf("%d %d\n", idx, ret);

  if(ret != -1)
    return ret;

  ret = solve(N-1) + 1;

  for(int i = 2; i<=N; i++){
    ret = max(ret, solve(i));
  }
  return ret;
}
int main(){

  int res = 0;

  scanf("%d", &N);

  for(int j = 1; j<=N; j++)
    scanf("%d", &d[j]);

  for(int i = 1; i<=N; i++){
    res = max(res, solve(i));
  }

  printf("%d\n",res);
  scanf("%d", &N);

  return 0;
}
