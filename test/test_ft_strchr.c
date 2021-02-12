
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello MarVin!";
	char		dst1[15] = "";
	char		dst2[15] = "";
//	char		dst3[15] = "";
//	char		dst4[15] = "";
	char		dst5[20] = "";
	char		dst6[20] = "";
	char		dst7[20] = "";
	char		dst8[20] = "";

	strcpy(dst1, strchr(str, 86));
	printf("str_lib >> %s \n", dst1);
	strcpy(dst2, ft_strchr(str, 86));
	printf("str_ft >> %s \n", dst2);

	printf("================\n");
	
	if (strchr(str, 79) == NULL)
		printf("str_lib >> null\n");
	if (ft_strchr(str, 79) == NULL)
		printf("str_ft >> null\n");
	
	printf("================\n");
	
	strcpy(dst5, strchr(str, 0));
	printf("str_lib >> %s \n", dst5);
	strcpy(dst6, ft_strchr(str, 0));
	printf("str_ft >> %s \n", dst6);
	
	printf("================\n");
	
	strcpy(dst7, strchr(str, 32));
	printf("str_lib >> %s \n", dst7);
	strcpy(dst8, ft_strchr(str, 32));
	printf("str_lib >> %s \n", dst8);
	
	return (0);
}
