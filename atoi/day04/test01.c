#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main()
{
	printf("-1 is %d %d\n",0, ft_recursive_factorial(-1));
	printf("0 is %d %d\n", 1, ft_recursive_factorial(0));
	printf("1 is %d %d\n", 1, ft_recursive_factorial(1));
	printf("2 is %d %d\n", 2, ft_recursive_factorial(2));
	printf("3 is %d %d\n", 6, ft_recursive_factorial(3));
	printf("10 is %d %d\n", 3628800, ft_recursive_factorial(10));
	printf("13 is %d %d\n", 0, ft_recursive_factorial(13));
	printf("\n");
}
