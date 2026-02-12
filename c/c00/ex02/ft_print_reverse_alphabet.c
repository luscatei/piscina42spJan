/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:12:18 by lfirmino          #+#    #+#             */
/*   Updated: 2026/02/12 01:10:21 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba o alfabeto em minúsculas, em uma única linha, em
	ordem descendente, começando pela letra 'z'.

	A função deve ser prototipada da seguinte forma:

	* void	ft_print_reverse_alphabet(void)
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter); letter--;
	}
}

//int	main(void)
//{
//ft_print_reverse_alphabet();
//}
