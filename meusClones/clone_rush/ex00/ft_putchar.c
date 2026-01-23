/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochu <jochu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:55:56 by lfirmino          #+#    #+#             */
/*   Updated: 2026/01/18 18:45:14 by jochu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putchar(char c);

// // int main(void)
// // {
// //     ft_putchar('a');
// //     return(0);
// // }

void	ft_putchar(int x, int y, int p, int l)
{
	if ((p == 1 && l == 1) || (p == x && l == 1))
	{
		write(1, "o", 1);
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
