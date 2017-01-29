#include <stdio.h>
#include <algorithm>
using namespace std;
int N, F;
int num[111];

int main(){

  scanf("%d", &N);
  for(int i = 0; i<N; i++){
    scanf("%d", &num[i]);
  }
  scanf("%d", &F);
  printf("%d", count(num, num+N, F));
}

//scanf함수에서 입력시 \n은 뭘 의미하는거죠?
