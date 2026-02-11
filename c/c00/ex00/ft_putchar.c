/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:19:17 by lfirmino          #+#    #+#             */
/*   Updated: 2026/02/10 15:11:41 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva uma função que exiba o caractere passadp como parâmetro.
	
	A função deve ser prototipada da seguinte forma:

	* void	ft_putchar(char c);
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//int	main(void)
//{
//	ft_putchar('a');
//}
