
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main()
{	
	const char str1[] = "Hey marvin!!";
	const char str2[] = "";
	int ret1;
	int ret2;

	ret1 = strlen(str1);
	printf("str_lib >> %d \n", ret1);
	ret2 = ft_strlen(str1);
	printf("str_ft >> %d \n", ret2);

	printf("================\n");

	ret1 = strlen(str2);
	printf("str_lib >> %d \n", ret1);
	ret2 = ft_strlen(str2);
	printf("str_ft >> %d \n", ret2);

	return (0);
}
