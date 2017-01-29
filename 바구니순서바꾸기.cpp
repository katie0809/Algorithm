#include <stdio.h>
#include <algorithm>
using namespace std;
int basket[111];

int main(){

  int N, M; //총 바구니 개수, 테스트케이스 개수
  scanf("%d %d\n", &N, &M);

  for(int i = 0; i<N; i++)
    basket[i+1] = i+1;

  for(int i = 0; i<M; i++){
    int begin = 0, end = 0, axis = 0;
    scanf("%d %d %d", &begin, &end, &axis);
    rotate(&basket[begin], &basket[axis], &basket[end+1]);
  }
  for(int i = 0; i<N; i++)
    {
      printf("%d", basket[i+1]);
      if(i != N-1) printf(" ");
    }
}
