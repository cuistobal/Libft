/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:49:44 by chrleroy          #+#    #+#             */
/*   Updated: 2025/01/14 10:15:43 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function looks for an element in a string and returns the index of its
//first occurence.
char	*ft_strchr(const char *string, int c)
{
	int	index;

	index = 0;
	if (c > 256)
		c %= 256;
	while (string[index] != '\0')
	{
		if (string[index] == c)
			return ((char *)string + index);
		index++;
	}
	if (string[index] == c)
		return ((char *)string + index);
	return (NULL);
}
/*
#include <strings.h>
#include <stdio.h>
int	main()
{
	const char *s = "teste";
	int	c = '\0';
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
}*/
