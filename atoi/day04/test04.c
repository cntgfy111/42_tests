#include <stdio.h>

int		ft_fibonacci(int index);

int		main()
{
	printf("1th is 0 %d\n", ft_fibonacci(0));
	printf("2th is 1 %d\n", ft_fibonacci(1));
	printf("3th is 1 %d\n", ft_fibonacci(2));
	printf("4th is 2 %d\n", ft_fibonacci(3));
	printf("5th is 3 %d\n", ft_fibonacci(4));
	printf("6th is 5 %d\n", ft_fibonacci(5));
	printf("7th is 8 %d\n", ft_fibonacci(6));
	printf("8th is 13 %d\n", ft_fibonacci(7));
	printf("22th is 17711, %d\n", ft_fibonacci(22));
}
