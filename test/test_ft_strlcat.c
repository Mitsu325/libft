
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello!";
	char		dst1[42] = "Anne ";
	char		dst2[42] = "Anne ";
	char		dst3[42] = "Anne ";
	char		dst4[42] = "Anne ";
	char		dst5[42] = "MarVin Bot 42 ";
	char		dst6[42] = "MarVin Bot 42 ";
	char		dst7[42] = "Mar";
	char		dst8[42] = "Mar";
	int			ret1;
	int			ret2;

	ret1 = (int)strlcat(dst1, str, 12);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst1);
	ret2 = (int)ft_strlcat(dst2, str, 12);
	printf("str_ft >> %d \n", ret2);
	printf("str_lib >> %s \n", dst2);

	printf("================\n");
	
	ret1 = (int)strlcat(dst3, str, 3);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst3);
	ret2 = (int)ft_strlcat(dst4, str, 3);
	printf("str_ft >> %d \n", ret2);
	printf("str_lib >> %s \n", dst4);
	
	printf("================\n");
	
	ret1 = (int)strlcat(dst5, str, 18);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst5);
	ret2 = (int)ft_strlcat(dst6, str, 18);
	printf("str_ft >> %d \n", ret2);
	printf("str_lib >> %s \n", dst6);
	
	printf("================\n");
	
	ret1 = (int)strlcat(dst7, str, 0);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst7);
	ret2 = (int)ft_strlcat(dst8, str, 0);
	printf("str_lib >> %d \n", ret2);
	printf("str_lib >> %s \n", dst8);

	return (0);
}
