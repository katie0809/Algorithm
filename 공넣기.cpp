#include <stdio.h>
#include <algorithm>
using namespace std;

int basket[111];

int main(){

  int N = 0, M= 0; //총 바구니 개수, 테스트케이스 개수
  scanf("%d %d\n", &N, &M);

  for(int i = 0; i<M; i++){
    int begin = 0, end = 0, idx = 0;
    scanf("%d %d %d", &begin, &end, &idx);
    fill(&basket[begin], &basket[end+1], idx);
  }
  for(int i = 1; i<=N; i++)
    {
      printf("%d", basket[i]);
      if(i != N) printf(" ");
    }
}
