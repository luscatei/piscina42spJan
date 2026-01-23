/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:55:56 by lfirmino          #+#    #+#             */
/*   Updated: 2026/01/17 08:46:58 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putchar(char c);

// // int main(void)
// // {
// //     ft_putchar('a');
// //     return(0);
// // }

void ft_putchar(char c)
{
    write(1, &c, 1);
    // write(1,(char, &c), 1); ideia que a Ellen compartilhou sobre como fazer o write ler numero.
}
