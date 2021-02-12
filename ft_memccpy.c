/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:01:36 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/11 07:27:28 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (*(str2 + index) == (char)c)
		{
			index++;
			return ((void *)dst + index);
		}
		index++;
	}
	return (NULL);
}
