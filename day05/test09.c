#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main()
{
	char s[] = "ABC 123 abc *** FRG";
	char *p;
	
	printf("%s\n", s);
	p = ft_strlowcase(s);
	printf("%s\n", s);
}
