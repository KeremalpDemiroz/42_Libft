/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:51:34 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/20 21:05:20 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
	# 2. dereceden fonksiyonlar null ile bitmez!
*/
static char *new_word(char const *s, char c)
{
	char *new_word;
	int	i;
	int	sw;

	i = 0;
	
	while (s[i])
	{
		sw = 0;
		while(s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			new_word[j] = s[j]; 
			i++;
		}
	}
	return ();
	
}
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
static char	*len_to_start(const char *s, size_t start, size_t  len)
{
	size_t 	i;
	char	*tmp;

	tmp = (char *)s;
	if (ft_strlen(tmp) <= start)
		return (NULL);
	i = 0;
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
		tmp = ft_strtrim(tmp, &c);
		if (j != 0)
			yeni = ft_substr(ft_strrchr(tmp, c), 1, (ft_strlen(ft_strrchr(tmp, c))));
		else
			yeni = tmp;
		if (j != 0)
			tmp = len_to_start(tmp,0,(ft_strlen(tmp) - ft_strlen(yeni) - 1));
		split[j] = malloc(ft_strlen(yeni));
		if (!split[j])
			// ft_free gibi bir func gerek
			return (NULL);
		split[j] = yeni; //
		j--;
		//free(yeni);
	}
	j = w_counter(s,c);
	split[j] = NULL;
	return (split);
}  
/*
"merhaba dünya naber" c = ' ' ||     7(strlentmp) != (19 - 12 = 7)  
										" naber" n (6 -1) n 
"yeni : merhaba dünya naber"  					19 -5 -1 = 13      0           13 
"tmp : merhaba dünya" 						13 - 5 -1= 7
"merhaba" 								7


#include <stdio.h>
#include <string.h>
static int *a(char *s, char c)
{
  int i = 0;
  int j = 0;

  while (s[i] != c)
    i++;
  if(s[i] == c)
  {
  while (s[i] == c)
  i++;
   while(s[i+j])
    {
      s[j] = s[i + j];
      j++;
    }
    s[j] = '\0';
  }
  return (1);
}

int main()
{
  
  char s[] = "Hello world";
  int r = a(s,' ');
  if(r)
    printf("%s", s);
}
*/  