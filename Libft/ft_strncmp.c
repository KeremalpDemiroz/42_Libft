/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:40:40 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/03 20:38:17 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t i;
	unsigned char *tmp1;
	unsigned char *tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	while ((i + 1 <= len) && (tmp1[i] != '\0'))
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char src[] = "aeraba";
	char dest[] = "Merbaa";
	
	printf("%d\n", ft_strncmp(dest, src, 1));
	return 0;
}