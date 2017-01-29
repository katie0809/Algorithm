#include <stdio.h>
#include <algorithm>
using namespace std;
struct member{
  int order;
  int age;
  char name[111];
};
member board[111111];

bool cmp(member &u, member &v){

  if(u.age < v.age) return true;
  else if(u.age == v.age){
    if(u.order < v.order) return true;
    else return false;
  }else return false;

}

int main(){

  int N;
  scanf("%d", &N);

  for(int i = 0; i<N; i++){
    scanf("%d %s", &board[i].age, board[i].name);
    board[i].order = i;
  }
  sort(board, board+N, cmp);

  for(int i = 0; i<N; i++){
    printf("%d %s\n", board[i].age, board[i].name);
  }
}
