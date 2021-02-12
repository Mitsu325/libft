
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = isalpha(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalpha(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isalpha(65);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalpha(65);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isalpha(97);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalpha(97);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
