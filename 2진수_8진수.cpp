#include <stdio.h>
#include <string.h>
char num[1111111];

int pow(int j){

  if(j == 0) return 1;
  int ret = 1;
  while(j--){
    ret *= 2;
  }
  return ret;
}

int main(){

  scanf("%s", num); //2진수를 받아온다.
  int idx, loop = 0;
  int len = strlen(num);
  idx = len % 3;
  loop = len / 3;

  int tmp = 0;
  for(int i = idx-1, j = 0; i >= 0; j++, i--){
    if(num[i] == '1')
      tmp += pow(j);
  }
  if(tmp != 0) printf("%d", tmp);

  for(int i = idx; i < len; i += 3){
    tmp = (((int)num[i] - 48) * 4) + (((int)num[i+1] - 48) * 2) + ((int)num[i+2] - 48);
    printf("%d", tmp);
  }
}
