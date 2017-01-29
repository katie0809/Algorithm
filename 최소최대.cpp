#if 0
#include <stdio.h>

int min, max;

int main(){

  int M;
  scanf("%d", &M);
  scanf("%d", &min);
  max = min;
  for(int i = 0; i<M-1; i++){
    int tmp;
    scanf("%d", &tmp);
    if(tmp < min) min = tmp;
    if(tmp > max) max = tmp;
  }

  printf("%d %d", min, max);
}
#endif

#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){

  int board[3];
  scanf("%d %d %d", &board[0], &board[1], &board[2]);
  sort(&board[0], &board[3]);
  printf("%d", board[1]);
}
