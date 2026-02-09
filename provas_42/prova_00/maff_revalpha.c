/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:02:43 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 23:39:28 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Esvreva um programa que exiba o alfabeto ao contrário, com as letras pares
	em maiúsculo e as letras ímpares em minúsculo, seguido por uma nova linha.
*/

#include <unistd.h>

int main(void)
{
	char c;
	int pos;
	
	c = 'z';
	pos = 1;
	while(c >= 'a')
	{
		if (pos % 2 == 0)
		{
			if (c >= 'a' && c <= 'z')
				c-=32;
			write(1, &c, 1);
			if (c >= 'A' && c <= 'Z')
				c+=32;
		}
		else
			write(1, &c, 1);
		c--;
		pos++;
	}
	write(1, "\n", 1);
	return (0);
}
