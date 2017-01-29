#include <stdio.h>

int N;
//판별해야할 수

bool chk(int k){

  for(int i = 2; i*i<=k;i++){
    if(k%i == 0){
      return false;
    }
  } return true;
}

int main(){

//  int k = 0;
  int ret = 0;
  scanf("%d", &N);

  for(int k = 1; k <= N; k++){
    for(int i = 2; i <= N; i++){
      int sum = 0;
      int count = 0;
      for(int j = 0; count < k; j++){
        if(i+j > N) goto END;
        if(chk(i+j)){
          sum += i+j;
          count++;
        }
      }if(sum == N){
        ret++;
      }
    }
}

END:
  printf("%d", ret);
}
