#include <stdio.h>
#pragma warning (disable:4996)

int T; //테스트케이스
int n; //후보자 수
int vote[15]; //후보자 i의 득표수

int main(){

  scanf("%d", &T);

  while(T--){
    scanf("%d", &n);
    int sum = 0;
    int winner = 1;
    for(int i = 1; i <= n; i++){
      scanf("%d", &vote[i]);
      sum += vote[i];
      if(vote[i] > vote[winner]){
        winner = i;
      }
    }
//    printf("winner %d, sum %d\n", winner, sum);
    int tmp = 0;
    for(int j = 1; j <= n; j++){
      if(vote[j] == vote[winner] && winner != j){
        tmp = 1;
        break;
      }
    }
    if(tmp ==0 && sum/2 < vote[winner]){
        //최다득표자의 표가 과반 초과
        printf("majority winner %d\n", winner);
//        break;
      }else if(tmp ==0 && sum/2 >= vote[winner]){
        printf("minority winner %d\n", winner);
//        break;
      }else printf("no winner\n");

    }

  }
