/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:01:15 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 20:04:59 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Esvreva uma função que exiba todos os dígitos em ordem crescente.
	Sua função deve ser declarada da seguinte forma:

	void	ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;
	
	c = '0';
	while(c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
	write (1, "\n", 1);
}

//int main(void)
//{
//	ft_print_numbers();
//	return (0);
//}
