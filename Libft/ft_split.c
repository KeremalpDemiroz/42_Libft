/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:51:34 by kedemiro          #+#    #+#             */
/*   Updated: 2025/06/18 21:16:55 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
İhtiyaçlar: verilen metindeki ayraçlar çıkarılınca elde edilen string sayısı bulunmalı -> stringlerin len'İ alınmalı 
-> yenistrler_strlen + kelime_sayısı = Büyük_malloc
Büyük_malloc içine -> yenistr + null = küçük malloc
atama sonrası free(küçük malloc)
return Büyük malloc (**return gibi)
*/

char	**ft_split(char const *s, char c)
{
	int i = 0 ; 
	int j = 0;
	int arr[100];
	char *tmp = s;
	char *yeni;
	int size_tmp = ft_strlen(ft_strchr(tmp, c));
	char **split = malloc();
	while (ft_strlen(tmp) != size_tmp)
	{
		char *yeni = ft_strrchr(tmp, c);
		tmp = ft_substr(tmp,0,ft_strlen(tmp) - ft_strlen(yeni));
		*split[j] = malloc(ft_strlen(yeni)) 
		j++;
	}
	
	
}