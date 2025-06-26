/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:32:53 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/03 13:22:18 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (siz > 0)
	{
		while (dst[i] != '\0' && i < siz)
			i++;
		j = i;
		while (src[i - j] != '\0' && i + 1 < siz)
		{
			dst[i] = src[i - j];
			i++;
		}
		if (j < siz)
			dst[i] = '\0';
		return (j + ft_strlen(src));
	}
	return (ft_strlen(src));
}
/*

#include <stdio.h>

int	main(void)
{
	char *src = "truc";
	char dest[14];
	int truc = ft_strlcat(dest, src, 14);
	printf("%d\n%s\n", truc, dest);
}*/
