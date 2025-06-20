#include "libft.h"
#include <stdio.h>
/*
	# 2. dereceden fonksiyonlar null ile bitmez!
*/
// static char *new_word(char const *s, char c)
// {
// 	char *new_word;
// 	int	i;
// 	int	sw;

// 	i = 0;
	
// 	while (s[i])
// 	{
// 		sw = 0;
// 		while(s[i] == c && s[i])
// 			i++;
// 		while (s[i] != c && s[i])
// 		{
// 			new_word[j] = s[j]; 
// 			i++;
// 		}
// 	}
// 	return ();
	
// }
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
static char	*len_to_start(const char *s, char c, size_t start, size_t  len)
{
	size_t 	i;
	char	*tmp;
	int		tmp_len;

	tmp = (char *)s;
	tmp_len = ft_strlen(tmp);
	if (tmp_len <= start)
		return (NULL);
	i = 0;
	while(tmp[tmp_len] == c)
	{
		len--;
		tmp_len;
	}
	while (i < len && s[start + i] != '\0')
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
} 
char	**ft_split(char const *s, char c)
{
	
	char	**split;
	char	*yeni;
	char	*tmp;
	int		j;

	tmp = (char*)s; 
	j = w_counter(s,c) -1;
	split = malloc(sizeof(char *) * (j + 1));
	if (!split)
		return (NULL);
	while (j >= 0)
	{
		
		split[j] = t_substr(ft_strrchr(tmp, c), 1, (ft_strlen(ft_strrchr(tmp, c))));
		if (!split[j])
			// ft_free gibi bir func gerek
			return (NULL);
		tmp = len_to_start(tmp, c, 0, (ft_strlen(tmp) - ft_strlen(split[j]) - 1));
		j--;
		//free(yeni);
	}
	j = w_counter(s,c);
	split[j] = NULL;
	return (split);
} 