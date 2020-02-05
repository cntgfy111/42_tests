#include <stdio.h>

char	*ft_strupcase(char *str);

int		main()
{
	char s[] = "bc *AaC* 	efg";
	char *p;
	printf("%s\n", s);
	p = ft_strupcase(s);
	printf("%s\n", s);
}
