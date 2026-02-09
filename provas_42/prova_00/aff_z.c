/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:46:15 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 23:52:47 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva um programa que receba uma string e exiba o primeiro caractere 'z'
	que encontrar nela, seguido por uma nova linha.

	*Se não houver caracteres 'z' na string, o programa esvreve 'z' seguido por
	uma nova linha.
	*Se o número de parâmetros não for 1, o programa exibe 'z' seguido por uma
	nova linha.
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "z\n", 2);
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'z')
		{
			write(1, "z\n", 2);
			return (0);
		}
		i++;
	}

	write(1, "z\n", 2);
	return (0);
}
