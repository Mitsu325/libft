
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len);

int     main(void)
{
	char dst1[] = "Hey marvin!!";
	char dst2[] = "Hey marvin!!";
	char dst3[] = "Hey marvin!!";
	char dst4[] = "Hey marvin!!";
	const char src[] = "Ola";
	const char src2[] = "Ola MarVin Yeh!";
	const char src3[] = "@@@";

	memmove(dst1, src, 3);
	printf("dst1 >> %s \n", dst1);
	ft_memmove(dst2, src, 3);
	printf("dst2 >> %s \n", dst2);

	printf("================\n");

	memmove(dst3, src2, 10);
	printf("dst3 >> %s \n", dst3);
	ft_memmove(dst4, src2, 10);
	printf("dst4 >> %s \n", dst4);

	printf("================\n");

	memmove(dst1, src3, 0);
	printf("dst1 >> %s \n", dst1);
	ft_memmove(dst2, src3, 0);
	printf("dst2 >> %s \n", dst2);

	return (0);
}
