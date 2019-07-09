/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:04:24 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/11 19:49:05 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int a;

	a = 2;
	if (nb % 2 == 0 || nb <= 1)
		return (0);
	while (a * a == nb)
	{
		return (0);
		a++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	nb++;
	while (nb++)
		if (ft_is_prime(nb))
			return (nb);
	return (0);
}
