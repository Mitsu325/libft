/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:11:36 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/11 17:48:52 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	offset;
	int		src_i;

	dst_len = ft_strlen(dst);
	offset = dst_len;
	src_i = 0;
	if (dstsize < dst_len + 1)
		return (ft_strlen(src) + dstsize);
	if (dstsize > dst_len + 1)
	{
		while (*(src + src_i) && offset < dstsize - 1)
			*(dst + offset++) = *(src + src_i++);
		*(dst + offset) = '\0';
	}
	return (dst_len + ft_strlen(src));
}
