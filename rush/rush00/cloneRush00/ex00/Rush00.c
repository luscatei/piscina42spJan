/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfirmino <lfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:56:17 by jochu             #+#    #+#             */
/*   Updated: 2026/01/18 18:24:27 by lfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(x, y, p, l)
{
	if ((p == 1 && l == 1) || (p == x && l == 1) || (p == 1 && l == y) || (p == x && l == y)) {
				write(1, "o", 1);
    } else if (((p > 1 && p < x) && l == 1) || ((p > 1 && p < x) && l == y)){
				write(1, "-", 1);
    } else if (((p > 1 && p < x) && l != 1) || ((p > 1 && p < x) && l != y)){
				write(1, " ", 1);
    } else if ((p == 1 && l != 1) || (p == 1 && l != y) || (p == x && l != 1) || (p == x && l != y)){
				write(1, "|", 1);
    }
}

int rush00(int x, int y){
    int     p = 1;
    int l = 1;
    while (p <= x && l <= y){
        while (p <= x){
            ft_putchar(x, y, p, l);
            p++;
        }
        escrever('\n');
        p = 1;
        l++;
    }
    return (0);
}

int main(){
    rush00(20, 1);
    return (0);
}
