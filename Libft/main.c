#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

char	ft_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main()
{
	char s[] = "Merhaba dunya bu bir test kahve ariyoruz";
	
	char **split = ft_split(s, ' ');
	int fd = open("soru_1", O_CREAT | O_RDWR| O_APPEND|O_TRUNC,0644);
	int i = 0;
	while (i < 7)
		ft_putstr_fd(split[i++], fd);
	while (i >= 0)
		free(split[i--]);
	free(split);
	printf("%d\n", fd);
	close(fd);
	printf("------------------------------\n");



	i = 0;
	char *d = ft_strmapi(s, *ft_upper);
	
	printf("%s\n", d);
	
	char **asplit = ft_split(d, ' ');
	/* printf("%s", asplit[0]); */
	int fd1 = open("soru_2", O_CREAT | O_RDWR, 0644);
	
	while (asplit[i])
	{
		printf("%s\n",asplit[i]);
		ft_putendl_fd(asplit[i], fd1);
		i++;
	}
	
	while (i >= 0)
		free(asplit[i--]);
	
	free(asplit);
	
	close(fd1);
}
