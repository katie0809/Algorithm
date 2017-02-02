#include <stdio.h>

int main()
{
	int n;
	int cnt = 2;
	scanf("%d", &n);

	while (1)
	{
		if (n%cnt == 0)
		{
			printf("%d\n", cnt);
			n = n / cnt;
		}
		else
		{
			cnt++;
		}

		if (n == 1)
		{
			break;
		}
	}
}
