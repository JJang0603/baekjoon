#include <stdio.h>

int main()
{
	int i, n;
	int arr[42] = {0};
	int cnt = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		arr[(n % 42)]++;
	}
	
	for (i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}