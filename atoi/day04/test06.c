#include <stdio.h>

int		ft_is_prime(int nb);

int		main()
{
	printf("-2 prime? %d %d\n", 0, ft_is_prime(-2));
	printf("0 prime? %d %d\n", 0, ft_is_prime(0));
	printf("1 prime? %d %d\n", 0, ft_is_prime(1));
	printf("2 prime? %d %d\n", 1, ft_is_prime(2));
	printf("3 prime? %d %d\n", 1, ft_is_prime(3));
	printf("4 prime? %d %d\n", 0, ft_is_prime(4));
	printf("101 prime? %d %d\n", 1, ft_is_prime(101));
	printf("1500450271 prime? %d %d\n", 1, ft_is_prime(1500450271));
	printf("2147483647 prime? %d %d\n", 1, ft_is_prime(2147483647));
}
