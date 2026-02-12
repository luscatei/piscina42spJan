/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:27:16 by lucas             #+#    #+#             */
/*   Updated: 2026/02/12 02:08:53 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba o número passado como parâmetro. A função deve
	ser capaz de ebibir todos os valores possíveis de uma variável do tipo int.

	A função deve ser prototipada da seguinte forma:

	* void	ft_putnbr(int nb);
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11); return;
	}
	if (nb < 0)
	{
		ft_putchar('-'); nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10); ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0'; ft_putchar(c);
	}
}

//int	main(void)
//{
//	ft_putnbr(-2147483648);
//}