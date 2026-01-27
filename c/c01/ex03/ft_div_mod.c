/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 03:49:01 by lfirmino          #+#    #+#             */
/*   Updated: 2026/01/23 15:42:54 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta função divide ‘a’ por ‘b’ e armazena o resultado 
//no inteiro apontado por ‘div’.
//Ela também armazena o resto da divisão de ‘a’ por ‘b’ 
//no inteiro apontado por ‘mod’.

#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	d;
// 	int	m;

// 	ft_div_mod(13, 2, &d, &m);
// 	printf("Divisão: %d\n", d);
// 	printf("Resto: %d\n", m);
// 	return (0);
// }
