
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(void)
{
	t_list		*elem;	
	char str[]	= "lorem ipsum dolor sit";

	if (!(elem = ft_lstnew(str)))
		ft_print_result("NULL");
	else
	{
		if (!(elem->content))
			ft_print_result("NULL");
		else
		{
			ft_print_result(elem->content);
		}
		if (!(elem->next))
		{
			write(1, "\n", 1);
			ft_print_result("NULL");
		}
	}
	
	return (0);
}
