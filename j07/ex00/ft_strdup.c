/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:41:59 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/24 13:46:35 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int j;
	int *str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)mallloc(sizeof(*str) * (len + 1));
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}
