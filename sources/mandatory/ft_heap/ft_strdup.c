/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:11:49 by chrleroy          #+#    #+#             */
/*   Updated: 2024/12/21 11:23:12 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//New version
//Duplicates the adress passed as parameter and returns the
//new pointer.
char	*ft_strdup(const char *string)
{
	size_t	size;
	size_t	index;
	char	*copy;

	index = 0;
	if (string)
	{
		size = ft_strlen(string);
		copy = (char *)malloc(sizeof(char) * size + 1);
		if (copy)
		{
			while (string[index] != '\0')
			{
				copy[index] = string[index];
				index++;
			}
			copy[index] = '\0';
		}
		return (copy);
	}
	return (NULL);
}
