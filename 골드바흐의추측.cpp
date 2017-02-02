#include <stdio.h>
#include <string.h>

int prime[1111111]; //소수를 저장

void initialize(){

  // for(int i = 2; i< 500000; i++){
  //   if(prime[i] == 0){
  //     for(int j = 1; j*i < 1000000; j++){
  //       prime[j*i] = 1;
  //     }
  //   }
  // }
  for(int i=2;i<1000001;i++)
  {
   if(prime[i]==0)
   {
    for(int j=i+i;j<1000001;j=j+i){
     prime[j]=1;
     printf("%d %d\n", i, j);}
   }
  }
  //소수인 경우 prime[k] == 0로 남는다
}

int main(){

  memset(&prime, 0, sizeof(prime));
  for(int i=2;i<1000001;i++)
  {
   if(prime[i]==0)
   {
    for(int j=i+i;j<1000001;j=j+i){
     prime[j]=1;
     printf("%d %d\n", i, j);}
   }
  }
  while(1){
  START:
    int n;
    scanf("%d", &n);
    if(n == 0) break;

    for(int i = 3; i<n; i++){
      if(prime[i] == 0 && prime[n-i] == 0) {
        printf("%d = %d + %d\n", n, i, n-i);
        goto START;
      }
      else continue;
    }
    printf("Goldbach's conjecture is wrong.\n");
  }

}
