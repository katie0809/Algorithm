#include <stdio.h>
#include <stack>

stack<pair<int>> s;
int board[555][555];
int current_x;
int current_y;
pair<int,int> tmp;

void move(){

  if(current_x == N-1 && current_y == M-1){

    count++;
  }
  //도착점에 도달하면 종료조건

  if(board[current_x + 1][current_y] < board[current_x][current_y]){
    current_x++; //x칸 한칸 이동
    tmp = make_pair(current_x+1, current_y);
    s.push(current_x+1, current_y);
  }

}

int main(){

  while(current_x < N && current_y < M){
    move();
  }

}
