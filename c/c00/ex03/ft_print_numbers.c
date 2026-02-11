/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:28:11 by lfirmino          #+#    #+#             */
/*   Updated: 2026/02/10 15:13:45 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crie uma função que exiba todos os dígitos em uma única linha, em ordem
	ascendente.

	A função deve ser prototipada da seguinte forma:

	* void	ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

//int	main(void)
//{
//ft_print_numbers();
//}
