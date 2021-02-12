
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello MarVin!";
	char		find1[15] = "Mar";
	char		find2[15] = "Mar";
	char		ret1[15] = "";
	char		ret2[15] = "";
	char		find3[20] = "anne";
	char		find4[20] = "anne";
	char		ret3[20] = "";
	char		ret4[20] = "";

	strcpy(ret1, strnstr(str, find1, 15));
	printf("str_lib >> %s \n", ret1);
	strcpy(ret2, strnstr(str, find2, 15));
	printf("str_ft >> %s \n", ret2);

	printf("================\n");
	
	strcpy(ret1, strnstr(str, find1, 5));
	printf("str_lib >> %s \n", ret1);
	strcpy(ret2, strnstr(str, find2, 5));
	printf("str_ft >> %s \n", ret2);

	printf("================\n");
	
	strcpy(ret3, strnstr(str, find3, 15));
	printf("str_lib >> %s \n", ret3);
	strcpy(ret4, strnstr(str, find4, 15));
	printf("str_ft >> %s \n", ret4);

	printf("================\n");
	
	
	return (0);
}
