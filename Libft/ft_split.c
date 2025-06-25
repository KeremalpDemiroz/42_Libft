/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:51:34 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/25 14:57:31 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (s[i] == c && s[i])
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

static int	ft_word_len(char *s, char c)
{
	int	i;

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

static void	*all_free(char **split, int a)
{
	while (a >= 0)
		free(split[a--]);
	free(split);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	char	*tmp;
	int		i;
	int		a;

	tmp = (char *)s;
	a = 0;
	split = malloc(sizeof(char *) * (w_counter(s, c) + 1));
	if (!split)
		return (NULL);
	while (*tmp)
	{
		if (*tmp == c)
			i = ft_word_len(tmp, c);
		tmp = &tmp[i];
		if (ft_strlen(tmp) == 0)
			break;
		split[a] = ft_substr(tmp, 0, (ft_word_len(tmp, c)));
		if(!split[a])
			return (all_free(split, a));
		a++;
		tmp = &tmp[ft_word_len(tmp, c)];
	}
	split[a] = NULL;
	return (split);
}

// int main()
// {
// 	char *s = "hello!";
// 	char **result = ft_split(s, ' ');
	
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%p : -%s-\n", result[i] ,result[i]);
// 		i++;
// 	}
// 	while(i >= 0)
// 		free(result[i--]);
// 	free(result);
// }