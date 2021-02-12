
#include <stdio.h>
#include "libft.h"

int     main(void)
{
	char *dst;
	char *dst2;

	dst = (char *)calloc(30, 1);
	printf("dst >> %s \n", dst);
	dst2 = (char *)ft_calloc(30, 1);
	printf("dst2 >> %s \n", dst2);
	printf("================\n");

	return (0);
}
