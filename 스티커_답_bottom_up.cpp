#include<cstdio>
#include<string.h>
#include<algorithm>

using namespace std;

int point[2][100001];
int memo[3][100001];

int m;

int solve(int x, int n)
{
	if (n >= m)
		return 0;

	int up, down, none;

	int &ret = memo[x][n];

	if (ret != -1)
		return ret;

	if (x == 0)	// 바로 전에 안뜯었을 경우
	{
		up = point[0][n] + solve(1, n + 1);
		down = point[1][n] + solve(2, n + 1);
		none = solve(0, n + 1);

		ret = max(up, max(down, none));
	}
	else if (x == 1)	// 바로 전에 위에거 뜯었을 경우
	{
		down = point[1][n] + solve(2, n + 1);
		none = solve(0, n + 1);

		ret = max(down, none);
	}
	else if (x == 2)	// 바로 전에 아래거 뜯었을 경우
	{
		up = point[0][n] + solve(1, n + 1);
		none = solve(0, n + 1);

		ret = max(up, none);
	}

	return ret;
}

int main()
{
	int n, x;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);

		for (int j = 0; j < 2; j++)
		{
			for (int a = 0; a < m; a++)
				memo[2][a] = -1;

			for (int k = 0; k < m; k++)
			{
				scanf("%d", &x);
				memo[j][k] = -1;
				point[j][k] = x;
			}
		}

		printf("%d\n", solve(0, 0));
	}

	return 0;
}
