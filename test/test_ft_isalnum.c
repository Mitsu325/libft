
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = isalnum(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalnum(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isalnum(68);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalnum(68);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isalnum(51);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalnum(51);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
