
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = tolower(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_tolower(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = tolower(65);
	printf("lib >> %d \n", ret1);
	ret2 = ft_tolower(65);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = tolower(90);
	printf("lib >> %d \n", ret1);
	ret2 = ft_tolower(90);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
