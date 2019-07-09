/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 09:19:58 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/07 12:31:24 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_printchar('P');
	}
	else
	{
		ft_printchar('N');
	}
}

int		main(void);