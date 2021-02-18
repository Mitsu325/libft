
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

//	ft_strnstr(haystack, needle, -1) == haystack + 1

//	strcpy(ret1, strnstr(str, find1, 15));
	printf("str_lib >> %s \n", strnstr(haystack, needle, -1));
//	strcpy(ret2, strnstr(str, find2, 15));
	printf("str_ft >> %s \n", ft_strnstr(haystack, needle, -1));

	printf("================\n");
	
	printf("str_lib >> %s \n", strnstr(haystack, "abcd", 9));
	
	printf("str_ft >> %s \n", ft_strnstr(haystack, "abcd", 9));
	
	printf("================\n");
	
	printf("str_lib >> %s \n", strnstr(haystack, "a", -1));
	
	printf("str_ft >> %s \n", ft_strnstr(haystack, "a", -1));
	
	return (0);
}
