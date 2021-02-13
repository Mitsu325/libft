
#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
	char	s1[] = "lorem ipsum dolor sit amet";
	char	s2[] = "dolor";
//	char	*strjoin1;

//	strjoin1 = ft_strjoin(s1, s2);
	printf("my_ft >> %s \n", ft_strtrim(s1, s2));
	printf("================\n");

	return (0);
}
