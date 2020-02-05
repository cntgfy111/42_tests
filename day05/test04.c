#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char word[] = " Hello!";
	unsigned int n = 45;
	char buff[35];
	char *p = &buff[0];

	p = ft_strncpy(p, &word, n);
	for (int i = 0; i < 40; i++)
		printf("%d ", buff[i]);

	char word1[] = " Hello!";
	char buff2[35];
	char *pt = &buff2[0];
	pt = strncpy(pt, &word1, n);
	for (int i = 0; i < 40; i++)
		printf("%d ", buff2[i]);
}
