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

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	if (argc != 2)
	{
		write(1, "Uso: ./programa \"string\"\n", 25);
		write(1, "Exemplo: ./programa \"hello\"\n", 28);
		return (1);
	}

	str = argv[1];

	while (str[i] != '\0')
	{
		if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
		{
			ft_putchar('5');
		}
		else if ((i + 1) % 3 == 0)
		{
			ft_putchar('3');
		}
		else if ((i + 1) % 5 == 0)
		{
			ft_putchar('3');
		}
		else
		{
			ft_putchar(str[i]);
		}

		i++;
	}
	ft_putchar('\n');
	return (0);
}
