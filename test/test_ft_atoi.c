
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int			ret1;
	int			ret2;


	ret1 = atoi("0");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("0");
	printf("ft >> %d \n", ret2);
	printf("================\n");
	
	ret1 = atoi("299:3");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("299:3");
	printf("ft >> %d \n", ret2);
	printf("================\n");

	ret1 = atoi("-325");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("-325");
	printf("ft >> %d \n", ret2);
	printf("================\n");
	
	ret1 = atoi("+42");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("+42");
	printf("ft >> %d \n", ret2);
	printf("================\n");
	
	ret1 = atoi("007");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("007");
	printf("ft >> %d \n", ret2);
	printf("================\n");
	
	ret1 = atoi("+-22");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("+-22");
	printf("ft >> %d \n", ret2);
	printf("================\n");
	
	ret1 = atoi("-+99");
	printf("lib >> %d \n", ret1);
	ret2 = ft_atoi("-+99");
