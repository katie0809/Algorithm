#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
  int N, X;
  int A[11111];

  memset(A, 0, sizeof(int)*11111);
  scanf("%d %d", &N, &X);

  for(int i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }

  int j = 0;
  while(N--){
    if(A[j] < X){
      printf("%d ", A[j]);
      j++;
  }else{
    j++;
    continue;
  }
}
  return 0;
}
