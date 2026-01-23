/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:56:17 by jochu             #+#    #+#             */
/*   Updated: 2026/01/18 21:21:12 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
x is the variable referring to the line size.
y is the variable referring to the collun size.
p is referring to atual position.
l is referring to atual line.

Our program also checks the size of the inserted 
row (x 211) and column (y 211), returning nothing if the established 
maximum value of 211 characters is exceeded.
*/
#include <unistd.h>

extern	void	ft_putchar(char c);

void	characters00(int x, int y, int p, int l)
{
	if ((p == 1 && l == 1) || (p == x && l == 1))
	{
		write (1, "o", 1);
	}	
	else if ((p == 1 && l == y) || (p == x && l == y))
	{
		write(1, "o", 1);
	}
	else if (((p > 1 && p < x) && l == 1) || ((p > 1 && p < x) && l == y))
	{
		write(1, "-", 1);
	}
	else if (((p > 1 && p < x) && l != 1) || ((p > 1 && p < x) && l != y))
	{
		write(1, " ", 1);
	}
	else if ((p == 1 && l != 1) || (p == 1 && l != y))
	{
		write(1, "|", 1);
	}
	else if ((p == x && l != 1) || (p == x && l != y))
	{
		write(1, "|", 1);
	}
}

int	rush(int x, int y)
{
	int	p;
	int	l;

	p = 1;
	l = 1;
	if (x <= 0 || y <= 0 || x > 211 || y > 211)
	{
		return (0);
	}
	else
	{
		while (p <= x && l <= y)
		{
			while (p <= x)
			{
				characters00(x, y, p, l);
				p++;
			}
			ft_putchar('\n');
			p = 1;
		l++;
		}
		return (0);
	}
}
