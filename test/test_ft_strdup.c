
#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
	char *dst;
	char *dst2;

	dst = strdup("lorem ipsum dolor sit amet");
	printf("dst >> %s \n", dst);
	dst2 = ft_strdup("lorem ipsum dolor sit amet");
	printf("dst2 >> %s \n", dst2);
	printf("================\n");

	return (0);
}
