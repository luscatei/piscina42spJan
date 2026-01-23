/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:56:07 by lfirmino          #+#    #+#             */
/*   Updated: 2026/01/18 18:46:28 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dentro desse arquivo é onde vai ser alterado os valores
// para modificar o tamanho da estrutura.

#include <unistd.h>

extern void		ft_putchar(char c);

int	rush_00(int x, int y)
{
	int	position = 1 ;
	int	line = 1 ;
	while (line <= y){
		if (line == 1 || line == y)
		{
			while (position <= x)
			{
				if (position == 1 || position == x)
				{
					ft_putchar('o');
					position++;
				}
				else
				{
					ft_putchar('-');
					position++;
				}
			}
		}
		else
		{
			while (position <= x)
			{
				if (position == 1 || position == x)
				{
					ft_putchar('|');
					position++;
				} else {
					ft_putchar(' ');
					position++;
				}
			}
		}
		ft_putchar('\n');
		position = 1;
		line++;
	}
	return (0);
}
