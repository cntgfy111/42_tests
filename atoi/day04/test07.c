#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main()
{
	printf("Next prime for -2 is %d %d\n", 2, ft_find_next_prime(-2));
	printf("Next prime for 0 is %d %d\n", 2, ft_find_next_prime(0));
	printf("Next prime for 1 is %d %d\n", 2, ft_find_next_prime(1));
	printf("Next prime for 6 is %d %d\n", 7, ft_find_next_prime(6));
	printf("Next prime for 8 is %d %d\n", 11, ft_find_next_prime(8));
	printf("Next primt fot 1500450272 is %d %d\n", 1500450283, ft_find_next_prime(1500450272));
}
