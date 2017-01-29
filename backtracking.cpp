#include <stdio.h>
#include <stdlib.h>

int R, C; //행, 열의 크기
int maze[11][11];

/*
미로가 주어진다.
통로는 1, 벽은 2로 입력이 들어온다.
지나간 길은 3로 표시한다.
매 단계마다 미로의 상태를 2차원 배열의 형태로 출력한다.

7 7
1 1 1 1 1 1 2
2 2 1 2 2 2 1
1 1 1 1 2 2 1
2 1 2 2 2 2 1
1 1 2 1 1 1 1
1 2 2 1 2 2 1
1 1 1 1 1 2 1

*/

//동 남 서 북
int x_move[4] = {0, 1, 0, -1};
int y_move[4] = {1, 0, -1, 0};

void print_maze(){
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void func(int x, int y){
	//기저사례
	if(x == R && y == C){
		printf("FINISH!\n");
		return;
	}

	int nx, ny;
	for(int i=0; i<4; i++){
		nx = x + x_move[i];
		ny = y + y_move[i];

		//인접한 4개의 칸이 갈 수 있는 칸일 때
		if(maze[nx][ny] == 1){
			maze[nx][ny] = 3; //지나갈 길이기 때문에 3으로 표시
			print_maze(); //출력
			func(nx, ny); //함수 재귀호출
			maze[nx][ny] = 1; //Back Track!!!!! 미로에서 다시 되돌아 나옴 = 다시 돌아 나오면서 3으로 방문 표시를 했던 것을 1로 원상 복귀 시켜줘야함
		}
	}
}

int main(void){

	scanf("%d %d", &R, &C);
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			scanf("%d", &maze[i][j]);
		}
	}
	printf("\n");

	maze[1][1] = 3;
	func(1, 1);

	return 0;
}
