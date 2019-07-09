/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 15:51:56 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/26 14:33:38 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     next_word(char *str)
{
    int i;

    i = 0;
    while ((str[i] != '\0' && str[i] != '\n') || str[i] != ' ' || str[i] != '\t')
		i++;
	return (i - 1);
}

int		count_words(char *str)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n' || str[i] != ' ' || str[i] != '\t')
		{
			i = i + next_word(str + i);
			count++;
		}
		i++;
	}
	return(count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (src != '\0' || a < n)
	{
		a++;
		dest[a] = src[a];
	}
	return (0);
}

char    **ft_split_whitespaces(char *str)
{
	char **tmp;
	int i;
	int j;
	int last_word;

	i = 0;
	j = 0;
	tmp = (char**)malloc(sizeof(char *) * (count_words((str) + 1)));
	while (str[i] != '\0')
	{
		if (str[i] != '\n' || str[i] != ' ' || str[i] != '\t')
		{
			last_word = i;
			i = i + next_word(str + i);
			if ((tmp[j] = (char*)malloc(sizeof(char *) * (i - last_word))) == NULL)
				return (NULL);
			ft_strncpy(tmp[j++],(str + last_word), (i - last_word + 1));
		}
		i++;
	}
	tmp[j] = 0;
	return (tmp);
}

int		main(void)
{
	printf("%c", **ft_split_whitespaces("Je test ca"));
	return (0);
}
