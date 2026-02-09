/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:09:18 by lucas             #+#    #+#             */
/*   Updated: 2026/02/08 20:12:02 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreva um programa que exiba "Hello World!" seguido por um \n.
*/

#include <unistd.h>

int main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
