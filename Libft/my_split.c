
#include "libft.h"
#include <stdio.h>

static	int	w_counter(char const *s, char c)
{
	int	c_count;
	int	i;
	int	sw;

	i = 0;
	c_count = 0;
	while (s[i])
	{
		sw = 0;
		while(s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			sw = 1;
			i++;
		}
		if (sw)
			c_count++;
	}
	return (c_count);
}

static int ft_word_len(char *s, char c)
{
	int i;

	i = 0;
	if (s[i] == c)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		return (i);
	}
	else
	{
		while (s[i] != c && s[i] != '\0')
			i++;	
		return (i);
	}
}
void	all_free(char **split, int a)
{
	if(!split[a])
	{
		while (a >= 0)
			free(split[a--]);
		free(split);
	}
}

char **ft_split(const char *s, char c)
{
	char	**split;
	char	*tmp;
	int		i;
	int 	a;

	tmp = (char *)s;
	a = 0;
	split = malloc(sizeof(char *) * (w_counter(s,c) + 1));
	if (!split)
		return (NULL);
	while (*tmp)
	{
		i = 0;
		i = ft_word_len(tmp,c);
		tmp = &tmp[i];
		if(ft_strlen(tmp) != 0)
		{
			split[a] = ft_substr(tmp, 0, (ft_word_len(tmp, c)));
			all_free(split, a);
			a++;
			tmp = &tmp[ft_word_len(tmp, c)];
		}
	}
	split[a] = NULL;
	return (split);
}

int main()
{
	char const s[] = "    sdsd      swe   MeDSFGC FBF G6  ĞÜÜÜ rhaba ben   r test    stri    ngiyim.      ";
	int i = 0;
	char **split;
	printf("s size : %ld\n", ft_strlen(s));
	split = ft_split(s, ' ');
	while (i < w_counter(s, ' '))
	{
		printf("Main Split[%d] : -%s-\n",i, split[i]);
		free(split[i]);
		i++; 
	}
	free(split);
}