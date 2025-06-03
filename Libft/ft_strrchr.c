/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:31:34 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/03 19:39:54 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int	i;
	
	tmp = (char *)s;
	i = ft_strlen(tmp);
	if(c == '\0')
		return (&tmp[i]);
	while(i >= 0)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i--;
	}
	return (NULL);
}
int	main(void)
{
	char s[] = "Merhaba, sence 4'ü bulabilir misin? ama bana sondaki 4 gerekli";
	printf("%s", ft_strrchr(s, 'a'));
	return (0);
}