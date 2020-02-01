#include <stdio.h>
#include <math.h>

int		ft_iterative_power(int nb, int power);

int main()
{
	printf("0 ** 10 = %f %d\n", pow(0, 10), ft_iterative_power(0, 10));
	printf("2 ** -2 = %d %d\n", 0, ft_iterative_power(0, -2));
	printf("2 ** 3 = %f %d\n", pow(2, 3), ft_iterative_power(2, 3));
	printf("2 ** 10 = %f %d\n", pow(2, 10), ft_iterative_power(2, 10));
	printf("2 ** 31 = %f %d\n", pow(2, 31), ft_iterative_power(2, 31));
	printf("2 ** 30 = %f %d\n", pow(2, 30), ft_iterative_power(2, 30));
	printf("1 ** 2147483647 =  %d\n", ft_iterative_power(1, 2147483647));
	printf("0 ** 0 = %f %d\n", pow(0, 0), ft_iterative_power(0, 0));
}
