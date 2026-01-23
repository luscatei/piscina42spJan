/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:23:31 by lfirmino          #+#    #+#             */
/*   Updated: 2026/01/19 00:26:17 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

// int main(void)
// {
// 	ft_print_alphabet();
// }
// char	letter;
// letter = 'a';
// while(letter <= 'z')
// {
// 	write(1, &letter, 1);
// 	letter++;
// }