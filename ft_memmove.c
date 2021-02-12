/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:11:53 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/11 08:19:07 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*from;
	char	*to;
	char	temp[len];

	i = 0;
	from = (char *)src;
	to = (char *)dst;
	while (i < (int)len)
	{
		*(temp + i) = *(from + i);
		i++;
	}
	i = 0;
	while (i < (int)len)
	{
		*(to + i) = *(temp + i);
		i++;
	}
	return (dst);
}
