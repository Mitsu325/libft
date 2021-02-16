/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:01:36 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/15 20:17:53 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;
	size_t	i;

	ptr_d = (char *)dst;
	ptr_s = (char *)src;
	i = 0;
	while (i < n)
	{
		*(ptr_d + i) = *(ptr_s + i);
		if (*((unsigned char *)ptr_s + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
