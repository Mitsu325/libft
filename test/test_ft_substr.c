
#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*sub2;

	sub2 = ft_substr(str, 400, 20);
	printf("my_ft >> %s \n", sub2);
	printf("================\n");

	return (0);
}
