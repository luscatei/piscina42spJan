/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:26:56 by lucas             #+#    #+#             */
/*   Updated: 2026/02/10 17:36:32 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba todas as diferentes combinações de dois números 
	de dois dígitos distintos (XX XX) entre 00 e 99, listadas em ordem 
	crescente.

	* A função deve ser prototipada da seguinte forma:
		void	ft_print_comb2(void)
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int		a;
	int 	b;
	
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnbr(a, b);
			if (a < 98 || b < 99)
			write(1, ", ", 2);
		b++;
	}
	a++;
}
}

//int main(void)
//{
//	ft_print_comb2();
//	write(1, "\n", 1);
//	return (0);
//}

//void	ft_print_comb2(void)
//{
	//	char d;
	//	char u;
//	char d1;
//	char u1;

//	d = '0';
//	while (d <= '9')
//	{
//		u = '0';
//		while (u <= '9')
//		{
//			d1 = d;
//			u1 = u + 1;
//			while (d1 <= '9')
//			{
//				while (u1 <= '9')
//				{
//					write(1, &d, 1);
//					write(1, &u, 1);
//					write(1, " ", 1);
//					write(1, &d1, 1);
//					write(1, &u1, 1);
//					if (!(d == '9' && u == '8' && d1 == '9' && u1 == '9'))
//							write(1, ", ", 2);
//					u1++;
//				}
//				d1++;
//				u1 = '0';
//			}
//			u++;
//		}
//		d++;
//	}
//	write(1, "\n", 1);
//}]
