/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:18:03 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 15:00:18 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva um programa que exiba todos os dígitos em ordem decrescente, 
	seguidos por uma nova liha.
*/

#include <unistd.h>

int main(void)
{
	int i;

	i = '9';
	while(i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
	//char c;

	//c = '9';
	//while (c >= '0')
	//{
	//	if (c % 2 != 0)
	//	{
	//		write(1, &c, 1);
	//	}
	//	c--;
	//}
	//write(1, "\n", 1);
	//return (0);
}
