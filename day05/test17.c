#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main()
{
	char dest1[13] = "Hello, ";
	char dest2[13] = "Hello, ";
	char src1[] = "World!";
	char src2[] = "Wrodl!";
	char *p1;
	char *p2;

	printf("%s\n", ft_strncat(dest1, src1, 7));
	printf("%s\n", strncat(dest2, src2, 7));
}
