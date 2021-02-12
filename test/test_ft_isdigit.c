
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = isdigit(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isdigit(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isdigit(0);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isdigit(0);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isdigit(51);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isdigit(51);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
