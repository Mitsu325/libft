/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:48:20 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/19 15:48:25 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list **new_list;
	t_list *new_element;

	while (lst != NULL)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
		{
			ft_lstdelone(new_element, del);
			return (NULL);
		}
		ft_lstadd_back(new_list, new_element);
		lst = lst->next;
	}
	return (*new_list);
}
