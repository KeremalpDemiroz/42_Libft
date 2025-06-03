#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char src[] = "Merhaba";
	char dest[0];
	
	printf("%ld\n", strlcat(dest, src, 4));
	printf("%s", dest);
	return 0;
}
	