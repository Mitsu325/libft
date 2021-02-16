
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int     main(void)
{
//	char	s1[] = "lorem      ipsum dolor sit amet";
//	char	s2[] = "dolor";
//	char	**words;
//	int		i = 0;

	printf("================\n");
//	words = ft_split(s1, ' ');
/*	while (*(words + i) != NULL)
	{
		printf("%s", *(words + i));
		printf("\n");
		i++;
	}*/
	printf("lib_ft >> %d \n", atoi("9223372036854775810"));
	printf("my_ft >> %d \n", ft_atoi("9223372036854775812"));
//	ft_putnbr_fd(12378, 1);
	printf("================\n");

	return (0);
}
