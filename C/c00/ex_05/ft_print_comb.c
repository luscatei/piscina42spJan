/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:34:27 by lucas             #+#    #+#             */
/*   Updated: 2026/01/26 20:04:43 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
A grande ideia desse programa é fazer uma lógica para printar um conjunto especifico de caracteres de modo que nenhum deles se repita.
*/

void    ft_print_comb(void)
{
	int	c; // centena
	int	d; // dezena
	int	u; // unidade

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d +1 ;
			while (u <= '9')
			{		
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c != '7' || d != '8' || u != '9')
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}

int main(void)
{
	ft_print_comb();
}