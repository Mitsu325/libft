
#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);

int     main(void)
{
	char str1[] = "Hey marvin!!";
	char str2[] = "Hey marvin!!";
	char str3[] = "Hey marvin!!";
	char str4[] = "Hey marvin!!";

	bzero(str1, 4);
	printf("str1 >> %s \n", str1);
	ft_bzero(str2, 4);
	printf("str2 >> %s \n", str2);

	printf("================\n");

	bzero(str3, 0);
	printf("str3 >> %s \n", str3);
	ft_bzero(str4, 0);
	printf("str4 >> %s \n", str4);

	return (0);
}
