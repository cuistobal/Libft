/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:53:28 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/03 14:05:13 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main()
{
	const char *s = "YOYOOOOOOOOOOO";
	int	c = '0';
	printf("%s", strrchr(s, c));
	printf("%s", "\n");
	printf("%s", ft_strrchr(s, c));
}*/
