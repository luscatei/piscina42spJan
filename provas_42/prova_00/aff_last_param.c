/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:52:30 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 20:57:53 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva um programa que receba strings como argumentos e exiba seu último 
	argumento seguido por uma nova linha.

	Se o número de argumentos for menor que 1, o programa exibe uma nova linha.
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	argc--;
	i = 0;
	while(argv[argc][i])
	{
		write(1, &argv[argc][i], 1);
		i++;
	}
	
	write(1, "\n", 1);
	return (0);
}
