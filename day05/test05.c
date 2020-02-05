#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	printf("%d\n", strcmp("123", "123a"));
	printf("%d\n", ft_strcmp("123", "123a"));
}
