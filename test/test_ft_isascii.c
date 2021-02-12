
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = isascii(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isascii(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isascii(127);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isascii(127);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isascii(177);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isascii(177);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
