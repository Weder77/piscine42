/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 13:47:49 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/24 14:14:05 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *otter;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	otter = (int*)malloc(sizeof(*otter) * (max - min));
	if (otter == NULL)
		return (0);
	while (min < max)
	{
		otter[i] = min;
		min++;
		i++;
	}
	*range = otter;
	return (i);
}
