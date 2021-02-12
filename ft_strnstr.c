/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:48 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/11 20:51:30 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	aux;
	int		flag;

	if (!ft_strlen(find))
		return ((char *)str);
	i = -1;
	while (++i < len && *(str + i))
	{
		if (*(str + i) == *(find))
		{
			aux = i;
			flag = 1;
			while (aux < len && *(find))
				if (*(str + aux++) != *(find++))
					flag = 0;
			if (flag && !*(find))
				return ((char *)str + i);
		}
	}
	return (NULL);
}
