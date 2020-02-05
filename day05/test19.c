#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char w1[] = "Hello!";
	char w2[] = "Hi!";
	char w3[] = "Hello!";
	char w4[] = "Hi!";

	printf("%lu %s\n", strlcpy(w1, w2, 6), w1);
	printf("%u %s\n", ft_strlcpy(w3, w4, 6), w3);
}
