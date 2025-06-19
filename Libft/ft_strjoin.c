/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:30:48 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/17 17:41:22 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	size_t	i;
	size_t	j;
	char	*str;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(total_size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
// int main()
// {
// 	char s1[] = "sdsd";
// 	char s2[] = "";
// 	char *res;
// 	res = ft_strjoin(s1,s2);
// 	printf("%s\n",res);
// 	free(res);
// 	return (0);
// }