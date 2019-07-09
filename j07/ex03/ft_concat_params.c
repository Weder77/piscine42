/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:13:35 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/25 15:51:24 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int *size;

	size = malloc((argc) * sizeof(char));
	i = 1;
	k = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			argc[k] = argv[i][j];
			k++;
			j++;
		}
		i++;
	}
	return (size);
}
