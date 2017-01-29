#include <stdio.h>
#pragma warning(disable:4996)

int board[50];

int tri(int n){

  int result;
  result = n*(n+1)/2;

  return result;
}

int main(){

  for(int i = 0; i < 50; i++){
    board[i] = tri(i+1);
  }//board[]에 50개의 삼각수를 먼저 만들어 넣어준다.

  int n;
  scanf("%d", &n);

  while(n--){
    int k;
    scanf("%d", &k);
    for(int i = 0; i < 50; i++){
      for(int j = 0; j < 50; j++){
        for(int s = 0; s < 50; s++){
          if(k == board[i] + board[j] + board[s]){
            printf("1\n");
            goto EXIT;
          }
          else if (k < board[i] + board[j] + board[s]){
            printf("0 %d %d %d\n", i, j, s);
            goto EXIT;
          }
        }
      }
    }
    EXIT:
      continue;
  }



}
