#include <stdio.h>

int main(){

int board_x = 0;
int board_y = 0;
//������ �� x��ġ�� y��ġ

int width = 0;
int height = 0;
//���̰� �����̴� ���ڰ����� ���μ���

int time = 0;
//���̰� �����̴� �ð�

  scanf("%d %d\n",&width, &height );
  scanf("%d %d\n", &board_x, &board_y);

  scanf("%d\n",&time );

  int way_x = 1;
  int way_y = 1;
  //���̰� �����̴� ����

  while(time--){

    board_x += way_x;
    board_y += way_y;

    if(board_x == width || board_x == 0){
      //x��ǥ�� ���� ���� �ε����°��
      way_x *= -1;
      //x��������� �ٲ��ش�
      //���������� ���ϴ°�� ��������
      //�������� ���ϴ°�� ����������
    }
    if(board_y == height || board_y == 0){
      //y��ǥ�� ���Ʒ� ���� �ε����� ���
      way_y *= -1;
      //y��������� �ٲ��ش�.
    }
  }
  printf("%d %d\n",board_x, board_y );
//  scanf("%d\n", &time );
}
