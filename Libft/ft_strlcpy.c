/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:31:11 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/02 17:45:44 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Merhaba";
	char	dest[10];

	printf("%ld\n", ft_strlcpy(dest, src, 3));
	printf("%s", dest);
}
int	main(void)
{
	char	src[] = "Merhaba";
	char	dest[10];
	int		i;

	ft_strlcpy(dest, src,3);
	i = 0;
	while (dest[i] != '\0')
	{
		printf("%c\n", dest[i]);
		i++;
	}
		printf("%c\n", dest[2]);
		printf("saasa\n");
}
*/