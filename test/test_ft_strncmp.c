
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "MarVin";
	char		*find1 = "MarVin";
	char		*find2 = "MarVin";
	int			ret1;
	int			ret2;
	char		*find3 = "anne";
	char		*find4 = "anne";
	char		*find5 = "Marta";
	char		*find6 = "Marta";

	ret1 = strncmp(str, find1, 15);
	printf("str_lib >> %d \n", ret1);
	ret2 = strncmp(str, find2, 15);
	printf("str_ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = strncmp(str, find5, 30);
	printf("str_lib >> %d \n", ret1);
	ret2 = strncmp(str, find6, 30);
	printf("str_ft >> %d \n", ret2);

	printf("================\n");

	ret1 = strncmp(str, find3, 15);
	printf("str_lib >> %d \n", ret1);
	ret2 = strncmp(str, find4, 15);
	printf("str_ft >> %d \n", ret2);

	printf("================\n");
	
	return (0);
}
