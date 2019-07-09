/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 20:03:28 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/24 13:45:09 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *biggest_otter;

	i = 0;
	if (min >= max)
		return (0);
	biggest_otter = (int*)malloc(sizeof(*biggest_otter) * (max - min));
	while (min < max)
	{
		biggest_otter[i] = min;
		min++;
		i++;
	}
	return (biggest_otter);
}
