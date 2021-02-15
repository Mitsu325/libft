
#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(void)
{
	char	s1[] = "lorem      ipsum dolor sit amet";
//	char	s2[] = "dolor";
	char	**words;
	int		i = 0;

	printf("================\n");
	words = ft_split(s1, ' ');
	while (*(words + i) != NULL)
	{
		printf("%s", *(words + i));
		printf("\n");
		i++;
	}
//	printf("my_ft >> %s \n", ft_strtrim(s1, s2));
	printf("================\n");

	return (0);
}
