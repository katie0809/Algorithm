#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int chk[100];
int ret;
int normal_idx, error_idx;

int check(int tmp){
  //0-99사이의 임의의 난수값을 하나 받아온다.
  //해당 값이 이미 불량/정상 확인 된 동전인지 확인하고
  //확인되지 않은 동전일경우 tmp값을
  //확인된 동전일경우 check(tmp_new)시행
  if(chk[tmp] == -1) {
    chk[tmp] = 2;
    return tmp;
  }
  else {
    int tmp_new;
    tmp_new = rand() % 100;
    check(tmp_new);
  }
}



int main(){

  int a[100];
  int b[100];

  memset(chk, -1, sizeof(chk));//불량/정상 체크배열 초기화
  memset(a, -1, sizeof(a));
  memset(b, -1, sizeof(b)); //기존 배열 초기화


    chk[0] = 1;
    chk[7] = 0;
    int k = 0;
    for(int i = 1; i < 33; i++ ){ // 2개의 인덱스가 남을때까지 반복
      int tmp;
      tmp = rand() % 100;
      b[0] = check(tmp);
      tmp = rand() % 100;
      b[1] = check(tmp);
      tmp = rand() % 100;
      b[2] = check(tmp);

      printf("b[0] %d, b[1] %d, b[2] %d\n", b[0], b[1], b[2] );
    }
    for(int i = 0; i < 100; i++){
      if(chk[i] == -1) {
        b[0] = i;
        chk[i] = 2;
        break;
      }
    }
    for(int i = 0; i < 100; i++){
      if(chk[i] == -1) {
        b[1] = i;
        chk[i] = 2;
        break;
      }
    }
    //모든 동전의 불량/정상 여부 검사를 마침
    printf("b[0] %d, b[1] %d\n", b[0], b[1] );
    scanf("%d\n", &k);

}
