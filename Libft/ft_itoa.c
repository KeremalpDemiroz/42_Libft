#include <stdio.h>
int	ft_itoa(int n)
{
	int	digits;
	int sign;
	unsigned int i;

	i = n;
	digits = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
	
	
}
int main()
{
	printf("%d\n", ft_itoa(1234567890123456));
}