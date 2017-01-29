/*수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.
예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은
A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.*/

#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int N; //수열 A의 크기
int s[1500];
int d[1500];


int solve(int);

int main(){

  memset(d, -1, sizeof(int)*1500);
  //d배열 초기화

  scanf("%d", &N);

  for(int i = 0; i<N; i++){
    scanf("%d",&s[i] );
  }//수열 A의 크기만큼 배열 s의 원소를 입력받는다.

  int res = 0;
  for(int i = 0; i<N; i++){
    printf("%d번째 시도 | solve(%d) = %d\n", i, i, res);
    res = max(res, solve(i));
  }

  printf("%d\n",res );
  scanf("%d", &N);

  return 0;

}

int solve(int idx){//idx번째 항목을 시작으로 하는 lIS의 길이

  if(idx == N){//시작 항목이 배열의 마지막 원소일경우 0 리턴
    return 0;
  }
  int &ret = d[idx];
  if(ret != -1){
    return ret;
  }

  ret = 1;

  for(int i = idx+1; i<=N; i++){
    printf("ret값은 %d, i = %d idx = %d\n",ret, i, idx);
    if(s[idx] < s[i]){
      ret = max(ret, 1+solve(i));
    }
  }

  return ret;

}
