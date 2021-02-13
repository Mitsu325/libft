
#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin1;

	strjoin1 = ft_strjoin(s1, s2);
	printf("my_ft >> %s \n", strjoin1);
	printf("================\n");

	return (0);
}
