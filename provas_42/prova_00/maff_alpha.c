/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:12:54 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 20:30:16 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva um programa que exiba o alfabeto, com as letras pares em maiúscolo
	e as letras ímpares em minúsculo, seguido por uma nova linha.
*/

#include <unistd.h>

//int	main(void)
//{
//	char c;
//	int pos;

//	c = 'a';
//	pos = 1;
//	while(c <= 'z')
//	{
//		if (pos % 2 == 0)
//		{
//			if (c >= 'a' && c <= 'z')
//				c-=32;
//			write (1, &c, 1);
//			if (c >= 'A' && c <= 'Z')
//				c+=32;
//		}
//		else
//			write(1, &c, 1);
//		c++;
//		pos++;
//	}
//	write(1, "\n", 1);
//	return (0);
//}

int main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
