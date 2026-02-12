/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:34:27 by lucas             #+#    #+#             */
/*   Updated: 2026/02/12 01:24:55 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba todas as combinações únicas de três dígitos 
	distintos, com os dígitos dentro de cada combinação e as próprias 
	combinações em ordem crescente.

	A função deve ser prototipada da seguinte forma:

	* void	ft_print_comb(void);
*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_comb(void)
{
	int	c, d, u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{		
				ft_putchar(c); ft_putchar(d); ft_putchar(u);
				if (c != '7' || d != '8' || u != '9')
					ft_putchar(','); ft_putchar(' ');  u++;
			}
			d++;
		}
		c++;
	}
}

//int main(void)
//{
//	ft_print_comb();
//}