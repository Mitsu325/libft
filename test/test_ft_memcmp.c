
#include <strings.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char str1[] = "Hey marvin!!";
	char str2[] = "Hey marvin!!";
	char str3[] = "Hey Marvin!!";
	char str4[] = "";
	char str5[] = "";
	int ret1;
	int ret2;

	printf("str1 >> %s \n", str1);
	printf("str2 >> %s \n", str2);
	ret1 = memcmp(str1, str2, 12);
	printf("cmp_lib >> %d \n", ret1);
	ret2 = ft_memcmp(str1, str2, 12);
	printf("cmp_fun >> %d \n", ret2);
	printf("================\n");
	ret1 = 0;
	ret2 = 0;
	
	printf("str1 >> %s \n", str1);
	printf("str3 >> %s \n", str3);
	ret1 = memcmp(str1, str3, 12);
	printf("cmp_lib >> %d \n", ret1);
	ret2 = ft_memcmp(str1, str3, 12);
	printf("cmp_fun >> %d \n", ret2);
	printf("================\n");
	ret1 = 0;
	ret2 = 0;

	printf("str1 >> %s \n", str1);
	printf("str4 >> %s \n", str4);
	ret1 = memcmp(str1, str4, 12);
	printf("cmp_lib >> %d \n", ret1);
	ret2 = ft_memcmp(str1, str4, 12);
	printf("cmp_fun >> %d \n", ret2);
	printf("================\n");
	ret1 = 0;
	ret2 = 0;

	printf("str4 >> %s \n", str4);
	printf("str5 >> %s \n", str5);
	ret1 = memcmp(str4, str5, 5);
	printf("cmp_lib >> %d \n", ret1);
	ret2 = ft_memcmp(str4, str5, 5);
	printf("cmp_fun >> %d \n", ret2);
	printf("================\n");

	return (0);
}
