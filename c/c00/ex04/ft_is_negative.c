/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:38:43 by lfirmino          #+#    #+#             */
/*   Updated: 2026/02/12 01:18:46 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba 'N' ou 'P' dependendo do sinal do inteiro passado
	como parâmetro.
	
		Se n for negativo, exiba 'N'.
		Se n for positivo ou zero, exiba 'P'.
		
	A função deve ser prototipada da seguinte forma:

	* void	ft_is_negative(int n);
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

//int	main(void)
//{
//ft_is_negative(-42);
//}
