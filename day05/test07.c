#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("%d %d\n", ft_strncmp("123", "123", 2), strncmp("123", "123", 2));
	printf("%d %d\n", ft_strncmp("123", "123", 3), strncmp("123", "123", 3));
	printf("%d %d\n", ft_strncmp("1", "123", 3), strncmp("1", "123", 3));
	printf("%d %d\n", ft_strncmp("1234", "123", 3), strncmp("1234", "123", 3));
}

