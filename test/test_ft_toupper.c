
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = toupper(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_toupper(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = toupper(122);
	printf("lib >> %d \n", ret1);
	ret2 = ft_toupper(122);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = toupper(97);
	printf("lib >> %d \n", ret1);
	ret2 = ft_toupper(97);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}
