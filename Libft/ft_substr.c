/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:35:42 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/18 19:48:56 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*temp;

	if (start >= ft_strlen(s))
	{
		temp = ft_strdup("");
		return (temp);
	}
	i = 0;
	temp = malloc(len +1);
	if (!temp)
		return (NULL);
	while (len != 0 && s[start + i] != '\0')
	{
		temp[i] = s[start + i];
		i++;
		len--;
	}
	temp[i] = '\0';
	return (temp);
}
