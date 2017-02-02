#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
char num[11];
int B;

long long int pow(int B, int j){

  if(j == 0) return 1;
  int ret = 1;
  while(j--){
    ret *= B;
  }
  return ret;
}

int main(){

  scanf("%s %d", num, &B);
  int len = strlen(num);
  long long int sum = 0;
  for(int i = len-1, j = 0; i>=0; i--, j++){
    long long int tmp = 0;
    if(num[i] >= 'A' && num[i] <= 'Z'){
      tmp = (int)(num[i]) - 55;
    }
    else tmp = (int)num[i]-48;

    sum += tmp * pow(B,j);
  }
  printf("%lld", sum);
}
