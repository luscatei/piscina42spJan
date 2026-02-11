/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:34:33 by lucas             #+#    #+#             */
/*   Updated: 2026/02/10 20:13:17 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	c[10];
	int		i, p;
	
	if (n <= 0 || n >= 10) return;
	i = -1;
	while (++i < n) c[i] = i + '0';
	while (1)
	{
		write(1, c, n);
		if (c[0]++ == (57 - n)) break;
		write(1, ", ", 2);
		p = n;
		while (--p >= 0 && c[p] == (57 - (n - 1 - p)));
		c[p]++;
		while (++p < n) c[p] = c[p - 1] + 1;
	}
}

int main(void)
{
	ft_print_combn(3);
	write(1, "\n", 1);
}
