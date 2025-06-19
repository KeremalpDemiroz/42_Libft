/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:23:35 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/18 20:06:28 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (char)c)
			return ((char *)(tmp + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(tmp + i));
	return (NULL);
}
