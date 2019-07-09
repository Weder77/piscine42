/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:20:55 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/26 13:56:38 by djean-ch         ###   ########.fr       */
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

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av);
{
	
}
