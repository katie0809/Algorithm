//가능한 모든 최대공약수의 합을 구하는 문제이다
#include <stdio.h>
#include <vector>
using namespace std;

int gcd(int N, int M){

  int sum = 0;
  for(int i = N; i>0; i--){
    if(M % i == 0){
      if(N % i == 0){
        sum += i;
        break;
      }
    }else continue;
  }
  return sum;
}

int main(){

  int N;
  scanf("%d", &N);
  while(N--){
    int size;
    vector<int> arr;
    scanf("%d", &size);
    for(int i = 0; i<size; i++){
      int tmp;
      scanf("%d", &tmp);
      arr.push_back(tmp);
    }
    int sum = 0;
    for(int i = 0; i<size-1; i++){
      for(int j = i+1; j<size; j++){
        sum += gcd(arr[i], arr[j]);
      }
    }
    printf("%d\n", sum);
  }
}
