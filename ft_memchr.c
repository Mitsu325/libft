/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:40:44 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/11 07:27:51 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		index;

	str = (const char *)s;
	index = 0;
	while (index < n)
	{
		if (*(str + index) == (char)c)
			return ((void *)s + index);
		index++;
	}
	return (NULL);
}
