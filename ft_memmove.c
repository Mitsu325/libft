/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:11:53 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/16 09:49:08 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;
	unsigned char	temp[len];

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	while (i < len)
	{
		*(temp + i) = *(from + i);
		i++;
	}
	while (i--)
		*(to + i) = *(temp + i);
	return (dst);
}
