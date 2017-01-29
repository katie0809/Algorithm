#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "valance.h"
#include <string.h>
#pragma warning(disable:4996)

int chk[100];
int ret;
int normal_idx, error_idx;


void solve(int a[], int b[]){//인덱스 배열과 비교할 배열을 인수로 받아온다.

  ret = balance(a,b); //저울함수 호출
  int tmp1[5];
  int tmp2[5];

  memset(tmp1, -1, sizeof(tmp1));
  memset(tmp2, -1, sizeof(tmp2)); //tmp배열 초기화

  if(ret == SMALL){//index가 더 가볍다
    for(int i = 0; i<3; i++){
      chk[b[i]] = 1; //배열 b의 비교하는 동전 모두 정상동전
    }
  }
  if(ret == LARGE){//index가 더 무볍다
    //case 1 : 불량동전 3
    //case 2 : 불량 2 정상 1

    tmp1[0] = b[0];
    tmp2[1] = b[1];
    ret = balance(tmp1, tmp2);

    if(ret == LARGE){
      chk[b[0]] = 1;
      chk[b[1]] = 0;
      chk[b[2]] = 0;
    }
    if(ret == EQUAL){
      tmp1[0] = b[2];
      ret = balance(tmp1, tmp2);

      if(ret == EQUAL){
        chk[b[0]] = 0;
        chk[b[1]] = 0;
        chk[b[2]] = 0;
      }else {
        chk[b[0]] = 0;
        chk[b[1]] = 0;
        chk[b[2]] = 1;
      }
    }
  }
  if(ret == EQUAL){//index와 무게가 같다
    tmp1[0] = b[0];
    tmp2[1] = b[1];
    ret = balance(tmp1, tmp2);
    if(ret == EQUAL){
      chk[b[0]] = 1;
      chk[b[1]] = 1;
      chk[b[2]] = 0;
    }
    if(ret == LARGE){
      chk[b[0]] = 1;
      chk[b[1]] = 0;
      chk[b[2]] = 1;
    }
    if(ret == SMALL){
      chk[b[0]] = 0;
      chk[b[1]] = 1;
      chk[b[2]] = 1;
    }
  }

}

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

  // a[]에는 인덱스로 사용할 2*정상동전, 1*불량동전 인덱스가 들어있다.
  // 임의의 3개의 동전을 택하여 b[]넣고 모든 동전을 비교할 때까지 solve함수를 돌린다.
  // 동전을 비교하여 인덱스 i의 동전이 불량동전이면 chk[i] = 0, 정상이면 chk[i] = 1
  // 을 적어준다.

  memset(chk, -1, sizeof(chk));//불량/정상 체크배열 초기화
  memset(a, -1, sizeof(a));
  memset(b, -1, sizeof(b)); //기존 배열 초기화

  //normal_idx, error_idx를 찾아낸다. 랜덤 or 이분탐색 등
  a[0] = normal_idx;
  a[1] = normal_idx;
  a[2] = normal_idx;

  //랜덤하게 3개의 인덱스를 b배열에 넣고 solve함수를 호출해 각 인덱스의 불량/정상 여부를 체크한다
  //이때 normal_idx와 error_idx로 사용할 인덱스는 확인할 동전에서 제외시켜준다.


  chk[normal_idx] = 1;
  chk[error_idx] = 0;
  int k = 0;
  for(int i = 1; i < 33; i++ ){ // 2개의 인덱스가 남을때까지 반복
    int tmp;
    tmp = rand() % 100;
    b[0] = check(tmp);
    tmp = rand() % 100;
    b[1] = check(tmp);
    tmp = rand() % 100;
    b[2] = check(tmp);

    slove(a, b);
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
  b[2] = -1;
  a[0] = normal_idx;
  a[1] = error_idx;
  a[2] = -1;
  ret = valance(a,b);
  if(ret == LARGE){
    chk[b[0]] = 0;
    chk[b[1]] = 0;
  }
  if(ret == SMALL){
    chk[b[0]] = 1;
    chk[b[1]] = 1;
  }
  if(ret == LARGE){
    a[0] = b[1];
    a[1] = -1;
    b[1] = -1;
    ret = valance(a,b);
    if(ret == LARGE){
      chk[b[1]] = 1;
      chk[b[0]] = 0;
    }else if(ret == SMALL){
      chk[b[1]] = 0;
      chk[b[0]] = 1;
    }
  }
  //모든 동전의 불량/정상 여부 검사를 마침

  memset(a, -1, sizeof(a));
  memset(b, -1, sizeof(b)); //기존 배열 다시 초기화

  for(int i = 0, index = 0; ; i++){
    if(chk[i] == 1){
      //i 인덱스의 동전이 정상동전
      continue;
    }
    if(chk[i] == 0){
      //i인덱스의 동전이 불량동전
      a[index] = i;
      index++;
    }
    if(chk[i] == -1){
      break;
      //동전의 끝. for루프 탈출
    }
  }


}
