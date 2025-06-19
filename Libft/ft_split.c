/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:51:34 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/19 19:00:38 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*yeni;
	char	*tmp;
	char	**split;
	int		i;
	int		j;
	int		c_count;

	tmp = (char*)s;
	i = 0; 
	j = 0;
	c_count = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i++] == c)
			c_count++;
	}
	split = malloc((c_count + 1));
	while (ft_strlen(tmp) != ft_strlen(s) - ft_strlen(ft_strchr(s,c)))
	{
		yeni = ft_substr(ft_strrchr(tmp, c), 1, (ft_strlen(ft_strrchr(tmp, c) -1)));
		tmp = ft_substr(tmp,0,ft_strlen(tmp) - ft_strlen(yeni));
		split[j++] = yeni;
		free(yeni);
		free(tmp);
	}
	return (split);
}  
// // split[j] = '\0';

// // "merhaba dünya naber" c = ' ' ||     7(strlentmp) != (19 - 12 = 7)  
// //										" naber"
// av[0][ft_strlen(a.out)]