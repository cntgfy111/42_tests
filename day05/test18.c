#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest1[14] = "Hello, ";
	char dest2[14] = "Hello, ";
	char src1[] = "World!";
	char src2[] = "World!";

	printf("%lu %s\n", strlcat(dest2, src2, 5), dest2);
	printf("%u %s\n", ft_strlcat(dest1, src1, 5), dest1);
}
