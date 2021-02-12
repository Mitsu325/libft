
#include <string.h>
#include <stdio.h>

void    *ft_memset(void *str, int c, size_t n);

int     main(void)
{
	char str1[] = "Hey marvin!!";
	char str2[] = "Hey marvin!!";

	memset(str1, 64, 3);
	printf("str1 >> %s \n", str1);
	ft_memset(str2, 64, 3);
	printf("str2 >> %s \n", str2);

	printf("================\n");

	memset(str1, -4, 3);
	printf("str1 >> %s \n", str1);
	ft_memset(str2, -4, 3);
	printf("str2 >> %s \n", str2);

	printf("================\n");

	memset(str1, 129, 3);
	printf("str1 >> %s \n", str1);
	ft_memset(str2, 129, 3);
	printf("str2 >> %s \n", str2);

	return (0);
}
