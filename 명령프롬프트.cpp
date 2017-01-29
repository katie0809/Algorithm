#include <stdio.h>
#include <string.h>

int main(){

  char arr[51][51]; //입력받은 파일명을 저장받는다.
  int N;
  int j = 0;

  scanf("%d", &N);
  while(N--){
      scanf("%s", &arr[j]);
      j++;
  }

  for(int s = 0; s<strlen(arr[0]); s++){
    for(int m = 0; m<N-1; m++){
      if(arr[m][s] != arr[m+1][s]){
          arr[0][s] = '?';
          break;
      }
    }
  }
  for(int i = 0; i<strlen(arr[0]); i++)
    printf("%c", arr[0][i] );

  scanf("%d", &N);
}
