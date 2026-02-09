#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			ft_putchar(1, "FizzBuzz", 8);
		}
		else if (i % 3 == 0)
		{
			ft_putchar(1, "Fizz", 4);
		}
		else if (i % 5 == 0)
		{
			ft_putchar(1, "Buzz", 4);
		}
		else
		{
			ft_putnbr(i);
		}

		if (i < 100)
		{
			ft_putchar(1, ", ", 2);
		}

		i++;
	}

	ft_putchar(1, "\n", 1);
	return (0);
}