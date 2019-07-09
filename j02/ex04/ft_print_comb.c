/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:32:19 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/07 15:40:46 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void ft_prompt(char a, char b, char c)
{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
}

void        ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';
    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                ft_prompt(a, b, c);
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a + 1;
        c = b + 1;
    }
}

int     main(void);
