
#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n);

int     main(void)
{
	const char str[] = "Hey marvin!!";
	char *ret1;
	char *ret2;

	ret1 = memchr(str, 109, 10);
	printf("str_lib >> %s \n", ret1);
	ret2 = ft_memchr(str, 109, 10);
	printf("str_ft >> %s \n", ret2);

	printf("================\n");

	ret1 = memchr(str, 109, 3);
	printf("str_lib >> %s \n", ret1);
	ret2 = ft_memchr(str, 109, 3);
	printf("str_ft >> %s \n", ret2);

	printf("================\n");

	ret1 = memchr(str, 75, 10);
	printf("str_lib >> %s \n", ret1);
	ret2 = ft_memchr(str, 75, 10);
	printf("str_ft >> %s \n", ret2);

	return (0);
}
