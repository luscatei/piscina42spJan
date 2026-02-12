/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c00.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:57:58 by lucas             #+#    #+#             */
/*   Updated: 2026/02/12 14:26:41 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_alphabet(void)
{
	char l='a';while(l<='z')ft_putchar(l++);
}

void	ft_print_reverse_alphabet(void)
{
	char l='z';while(l>='a')ft_putchar(l--);
}

void	ft_print_numbers(void)
{
	int n='0';while(n<='9')ft_putchar(n++);
}

void	ft_is_negative(int n)
{
	ft_putchar(n>=0?'P':'N');
}

void	ft_print_comb(void)
{
	char	c=48,d,u;
	while(c<=55){d=c+1;while(d<=56){u=d+1;while(u<=57){
	ft_putchar(c);ft_putchar(d);ft_putchar(u);
	if(c!=55||d!=56||u!=57){ft_putchar(',');ft_putchar(' ');}u++;}d++;}c++;}
	ft_putchar('\n');
}

void	ft_print_comb2(void)
{
	char	d='0',u,d1,u1;
	while(d<='9'){u='0';while(u<='9'){d1=d;u1=u+1;
	while(d1<='9'){while(u1<='9'){ft_putchar(d);ft_putchar(u);
    ft_putchar(' ');ft_putchar(d1);ft_putchar(u1);
	if(!(d=='9'&&u=='8'&&d1=='9'&&u1=='9'))
            {ft_putchar(',');ft_putchar(' ');}u1++;}
	d1++;u1='0';}u++;}d++;}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	if(nb==-2147483648){write(1,"-2147483648",11);return;}
	if(nb<0){write(1,"-",1);nb=-nb;}
	if(nb>9){ft_putnbr(nb/10);ft_putnbr(nb%10);}
	else ft_putchar(nb+'0');
}

void	ft_print_combn(int n)
{
	char	c[10];int		i=-1,p;
	if(n<=0||n>=10)return;
	while(++i<n)c[i]=i+'0';
	while(1){write(1,c,n);
	if(c[0]++==(58-n)){ft_putchar('\n');break;}
	ft_putchar(',');ft_putchar(' ');p=n;
	while(--p>=0&&c[p]==(58-(n-1-p)));c[p]++;
	while(++p<n)c[p]=c[p-1]+1;
	}
}

int	main(void)
{
	ft_putchar('a');ft_putchar('\n');
	ft_print_alphabet();ft_putchar('\n');
	ft_print_reverse_alphabet();ft_putchar('\n');
	ft_print_numbers();ft_putchar('\n');
	ft_is_negative(-42);ft_putchar(',');ft_putchar(' ');
	ft_is_negative(42);ft_putchar('.');ft_putchar('\n');
	ft_print_comb();
	ft_print_comb2();
	ft_putnbr(42);ft_putchar('\n');
	ft_print_combn(2);
	return(0);
}
