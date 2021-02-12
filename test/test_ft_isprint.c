
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = isprint(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isprint(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isprint(126);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isprint(126);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isprint(177);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isprint(177);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
