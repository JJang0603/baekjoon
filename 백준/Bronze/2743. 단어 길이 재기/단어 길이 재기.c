#include <stdio.h>

int main()
{
	int i;
	int cnt = 0;
	char ch[101];

	scanf("%s", ch);
	for (i = 0; ; i++)
	{
		if (ch[i] == '\0')
		{
			break;
		}
		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}