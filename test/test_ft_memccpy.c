
#include <string.h>
#include <stdio.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n);

int     main(void)
{
	char dst1[] = "Hey marvin!!";
	char dst2[] = "Hey marvin!!";
	char dst3[] = "Hey marvin!!";
	char dst4[] = "Hey marvin!!";
	const char src[] = "Ola como";
	const char src2[] = "Olar MarVin Yeh!";

	memccpy(dst1, src, 121, 3);
	printf("dst1 >> %s \n", dst1);
	ft_memccpy(dst2, src, 121, 3);
	printf("dst2 >> %s \n", dst2);

	printf("================\n");

	memccpy(dst3, src, 111, 8);
	printf("dst3 >> %s \n", dst3);
	ft_memccpy(dst4, src, 111, 8);
	printf("dst4 >> %s \n", dst4);

	printf("================\n");

	memccpy(dst1, src2, 121, 10);
	printf("dst1 >> %s \n", dst1);
	ft_memccpy(dst2, src2, 121, 15);
	printf("dst2 >> %s \n", dst2);

	return (0);
}
