/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:51:07 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 14:58:58 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva um programa que receba uma string e exiba o primeiro caractere 'a' 
	que encontrar nela, seguido por uma nova linha.

	* Se não houver caracteres 'a' na string, o programa apenas escreve uma 
	nova linha.
	* Se o número de parâmetros não for 1, o programa exibe 'a' seguido por uma 
	nova linha.
*/

#include <unistd.h>

int main(void)
{
	write(1, "a\n", 2);
	return (0);
}
//int	main(int argc, char **argv)
//{
//	int	i;
	
//	if (argc != 2)
//	{
//		write(1, "a\n", 2);
//		return (0);
//	}
//	i = 0;

//	while (argv[1][i])
//	{
//		if (argv[1][i] == 'a')
//		{
//			write(1, "a\n", 2);
//			return (0);
//		}
//		i++;
//	}
//	write(1, "\n", 1);
//	return (0);
//}
