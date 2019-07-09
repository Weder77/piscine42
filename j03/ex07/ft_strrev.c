/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 17:03:46 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/11 14:20:06 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	k;

	i = ft_strlen(str);
	j = 1;
	while (j < i)
	{
		k = str[j - 1];
		str[j - 1] = str[i - 1];
		str[i - 1] = k;
		j++;
		i--;
	}
	return (str);
}
