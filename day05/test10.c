#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *p;
	char s1[] = "HOW TO TURN_OFF -CAPS+LOCK";
	char *p1;

	p = ft_strcapitalize(s);
	printf("%s\n", s);
	p1 = ft_strcapitalize(s1);
	printf("%s\n", s1);
}
