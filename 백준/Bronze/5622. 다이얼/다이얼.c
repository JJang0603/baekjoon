#include <stdio.h>

int main(void)
{
	int dial[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	char word[16];
	int i, index;
	int time = 0;
	
	scanf("%s", word);
	for (i = 0; word[i] != '\0'; i++)
	{
		index = (int)word[i] - 'A';
		time += dial[index];
	}
	printf("%d\n", time);

	return 0;
}