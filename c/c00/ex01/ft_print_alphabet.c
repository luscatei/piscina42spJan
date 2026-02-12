/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:23:31 by lfirmino          #+#    #+#             */
/*   Updated: 2026/02/12 01:10:09 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba o algabeto em minúsculas, em uma única linha, em ordem descendente, começando pela letra 'z'.

	A função deve ser prototipada da seguinte forma:

	* void	ft_print_reverser_alphabet(void)
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char letter;
	
	letter = 'a';

	while (letter <= 'z')
	{
		ft_putchar(letter); letter++;
	}
}

//int main(void)
//{
//ft_print_alphabet();
//return (0);
//}
