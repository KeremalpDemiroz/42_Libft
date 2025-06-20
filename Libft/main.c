#include "libft.h"
#include <stdio.h>

int main()
{
	const char s[] ="      split       this for   me  !       ";
	char **split;
	size_t i = 0;
	split = ft_split(s, ' ');
	printf("------------------------------------------------------------------------------\n");
	while (i < 5)
	{
		printf("main : -%s-\n", split[i]);
		i++;
	}
	free(split);
	return 0;

}
