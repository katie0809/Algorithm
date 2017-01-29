#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int d1[1111]; //가장 긴 증가하는 부분수열
int d2[1111]; //가장 긴 감소하는 부분수열
int s[1111];
int N; //테스트케이스

int solve1(int idx){
//idx를 마지막으로 하는 증가하는 부분수열
  if(idx == N)
    return 0;

  int &ret = d1[idx];
  if(ret != -1)
    return ret;
  //탐색된 적 있다면 탐색값 리턴
  ret = 1;
  for(int i = idx-1; i >= 0; i--){
    if(s[idx] > s[i])
      ret = max(ret, solve1(i)+1);
  }
  return ret;
}

int solve2(int idx){
//idx를 시작으로 하는 감소하는 부분수열
  if(idx == N)
    return 0;

  int &ret = d2[idx];
  if(ret != -1)
    return ret;
  //탐색된 적 있다면 탐색값 리턴
  ret = 1;
  for(int j = idx+1; j <= N; j++){
    if(s[idx] > s[j])
      ret = max(ret, solve2(j)+1);
  }

  return ret;
}
int main(){

  memset(d1, -1, sizeof(int)*1111);
  memset(d2, -1, sizeof(int)*1111);

  scanf("%d", &N);
  //테스트 케이스의 개수를 입력받는다.

  for(int k = 0; k<N; k++){
    scanf("%d", &s[k]);
  }
  //수열을 입력받는다.

  int answer = 0;

  for(int i = 0; i<N; i++){
    answer = max(answer, solve1(i)+solve2(i));
  }
  //
  // for(int i = 0; i<N; i++){
  //   printf("d1[%d] = %d, d2[%d] = %d\n", i, d1[i], i, d2[i]);
  //   if(max < d1[i] + d2[i]){
  //     max = d1[i] + d2[i];
  //   }
  // }

  printf("%d", answer-1);


}
