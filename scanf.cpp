#include <stdio.h>

int board[5][5]
int N;
int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &board[i][j]);

  printf("%d", board[2]);

	}
