/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:47:45 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/26 13:40:06 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#indef FT_STOCK_PAR_H
#define FT_STOCK_PAR_H

typedef struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}				t_stock_par;
#endif
