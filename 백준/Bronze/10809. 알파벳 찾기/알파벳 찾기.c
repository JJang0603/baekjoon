#include <stdio.h>

int main(void)
{
	char S[101];
	int i, index;
	int alphabet[26];

	scanf("%s", &S);
	for (i = 0; i < 26; i++)
	{
		alphabet[i] = -1;
	}

	for (i = 0; S[i] != '\0'; i++)
	{
		index = (int)S[i] - 'a';
		if (alphabet[index] == -1)
		{
			alphabet[index] = i;
		}
	}
	
	for (i = 0; i < 26; i++)
	{
		printf("%d ", alphabet[i]);
	}

	return 0;
}