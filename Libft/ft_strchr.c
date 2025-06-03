/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:23:35 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/03 19:00:48 by kedemiro         ###   ########.fr       */
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
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	if (c == '\0')
		return (&tmp[i]);
	return (NULL);
}
int	main(void)
{
	char s[] = "Merhaba, sence 4'ü bulabilir misin?";
	printf("%s", ft_strchr(s, 'v'));
	return (0);
}