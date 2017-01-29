#include <stdio.h>

int board_x;
int board_y;
//개미의 현 x위치와 y위치

int width;
int height;
//개미가 움직이는 격자공간의 가로세로

int time;
//개미가 움직이는 시간

int main(){

  scanf("%d %d",&width, &height );
  scanf("%d %d", &board_x, &board_y);

  scanf("%d",&time );

  int way_x = 1;
  int way_y = 1;
  //개미가 움직이는 방향

  while(time--){

    board_x += way_x;
    board_y += way_y;

    if(board_x == width || board_x == 0){
      //x좌표가 양쪽 벽에 부딪히는경우
      way_x *= -1;
      //x진행방향을 바꿔준다
      //오른쪽으로 향하는경우 왼쪽으로
      //왼쪽으로 향하는경우 오른쪽으로
    }
    if(board_y == height || board_y == 0){
      //y좌표가 위아래 벽에 부딪히는 경우
      way_y *= -1;
      //y진행방향을 바꿔준다.
    }
  }

  printf("%d %d\n",board_x, board_y );

}
