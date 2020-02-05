#include <stdio.h>

int		ft_str_is_numeric(char *str);

int main()
{
	printf("%d\n", ft_str_is_numeric("1235657576"));
	printf("%d\n", ft_str_is_numeric("12356/57576"));
}
