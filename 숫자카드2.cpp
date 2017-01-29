//find()는 O(n)이므로 시간초과난다!!
//정렬 후 이분탐색

#include <stdio.h>
#include <functional>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int N, M; //가지고있는, 구해야할 케이스 개수
int N_board[555555], M_board[555555], ret[555555]; //숫자카드를 저장하는 배열

int solve(int find, int begin, int end){
//이분탐색. 원하는 수를 찾지 못할경우 -1반환
  int middle = (end + begin) / 2;

  if(end < begin) return -1;
    if(find == N_board[middle]) return middle;
    else{
      if(find > N_board[middle])
        return solve(find, middle + 1, end);
      if(find < N_board[middle])
        return solve(find, 0, middle - 1);
    }
}

int BST(int find, int begin, int end){
  //루프를 돌면서 중복되는 카드 개수를 찾는다.
}

int main(){

//  memset(&ret, 0, sizeof(int)*555555);
  scanf("%d\n", &N);
  for(int i = 0; i<N; i++)
    scanf("%d", &N_board[i]);
  scanf("%d\n", &M);
  for(int i = 0; i<M; i++)
    scanf("%d", &M_board[i]);

  sort(N_board, N_board + N); //상근이가 가진 카드는 오름차순으로 정렬해둔다

  for(int i = 0; i<M; i++){
    int tmp = solve(M_board[i], 0, N-1);
    if(tmp == -1) continue;
    else{
      ret[i]++;
      solve(M_board[i], tmp+1, N-1);
      solve(M_board[i], 0, tmp-1);
    }
  }
  for(int i = 0; i<M; i++){
    printf("%d", ret[i]);
    if(i != M-1) printf(" ");
  }
}
