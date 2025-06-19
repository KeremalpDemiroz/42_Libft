#include "libft.h"
#include <stdio.h>
int main()
{
	char **result;
	int i = 0;
	char *tmp = "merhaba bu bir testtir.";
	result = ft_split(tmp, ' ');
	while(result[i])
	{
		printf("%s\n", result[i++]);
		// free(result[i]);
	}
	// free(result);
// char c= ' ';
// int c_count = 0;
}