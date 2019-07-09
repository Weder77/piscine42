/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:00:08 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/07 12:33:27 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_all(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
}

void	ft_numbers(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_print_all(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '8')
		{
			ft_numbers(a, b, c, d);
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

int		main(void);
