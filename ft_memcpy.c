/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:43:48 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/11 07:28:47 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		index;

	str1 = (char *)dst;
	str2 = (const char *)src;
	index = 0;
	while (index < n)
	{
		*(str1 + index) = *(str2 + index);
		index++;
	}
	return ((void *)dst);
}
