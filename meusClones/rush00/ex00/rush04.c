/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:44:42 by lfirmino          #+#    #+#             */
/*   Updated: 2026/01/18 21:46:54 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	characteres01(int x, int y, int p, int l)
{
	if ((p == 1 && l == 1) || (p == x && l == y))
	{
		write (1, "A", 1);
	}	
	else if ((p == x && l == 1) || (p == 1 && l == x))
	{
		write(1, "C", 1);
	}
	else if (((p > 1 && p < x) && l == 1) || ((p > 1 && p < x) && l == y))
	{
		write(1, "B", 1);
	}
	else if (((p > 1 && p < x) && l != 1) || ((p > 1 && p < x) && l != y))
	{
		write(1, " ", 1);
	}
	else if ((p == 1 && l != 1) || (p == 1 && l != y))
	{
		write(1, "B", 1);
	}
	else if ((p == x && l != 1) || (p == x && l != y))
	{
		write(1, "B", 1);
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
				characteres01(x, y, p, l);
				p++;
			}
			ft_putchar('\n');
			p = 1;
		l++;
		}
		return (0);
	}
}
