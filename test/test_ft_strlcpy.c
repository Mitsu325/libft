
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello!";
	char		dst1[42];
	char		dst2[42];
	char		dst3[42];
	char		dst4[42];
	int			ret1;
	int			ret2;

	ret1 = (int)strlcpy(dst1, str, 7);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst1);
	ret2 = (int)ft_strlcpy(dst2, str, 7);
	printf("str_ft >> %d \n", ret2);
	printf("str_lib >> %s \n", dst2);

	printf("================\n");
	
	ret1 = (int)strlcpy(dst3, str, 3);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst3);
	ret2 = (int)ft_strlcpy(dst4, str, 3);
	printf("str_ft >> %d \n", ret2);
	printf("str_lib >> %s \n", dst4);
	
	return (0);
}
