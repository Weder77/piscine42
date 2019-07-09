/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:34:23 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/10 15:11:44 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	while (nb < 0)
		return (0);
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (1);
}
