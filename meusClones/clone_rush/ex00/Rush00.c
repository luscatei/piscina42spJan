/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochu <jochu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:56:17 by jochu             #+#    #+#             */
/*   Updated: 2026/01/18 18:45:36 by jochu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(int x, int y, int p, int l);

int	rush00(int x, int y)
{
	int	p;
	int	l;

	p = 1;
	l = 1;
	while (p <= x && l <= y)
	{
		while (p <= x)
		{
			ft_putchar(x, y, p, l);
			p++;
		}
		write(1, "\n", 1);
		p = 1;
	l++;
	}
	return (0);
}
