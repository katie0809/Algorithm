#include <stdio.h>
#pragma warning (disable:4996)

long long K; //갖고있는 랜선의 개수
long long N; //필요한 랜선개수
long long s[11111];
//갖고있는 랜선들의 길이

int main(){

  scanf("%lld %lld",&K,&N);

  unsigned long long sum = 0;
  for(int i = 0; i < K; i++){
    scanf("%lld", &s[i]);
    sum += s[i];
  }
  long long max = 0;
  for(long long i = sum/N; i > 0; i--){

    long long count = 0;

    for(long long j = 0; j < K; j++){
      count = count + s[j] / i;
    }

    if(count == N && i > max){
      max = i;
    }
    else if(count > N){
      break;
    }
    else continue;
  }

  printf("%lld", max);
  scanf("%lld %lld",&K,&N);

}
