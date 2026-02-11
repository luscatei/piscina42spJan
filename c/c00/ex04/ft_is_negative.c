/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:38:43 by lfirmino          #+#    #+#             */
/*   Updated: 2026/02/10 15:16:24 by lucas            ###   ########.fr       */
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

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

//int	main(void)
//{
//ft_is_negative(-42);
//}
