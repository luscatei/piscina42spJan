/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:36:42 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 20:47:37 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Esvreva um programa que receba strings como argumentos e exiba seu primeiro
	argumento seguido por um \n.
	Se o número de argumentos dor menor que 1 (ou seja, só o nome do programa),
	o programa exibe \n.
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
	i = 0;
	while(argv[1][i])
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	
	write(1, "\n", 1);
	return (0);
}
