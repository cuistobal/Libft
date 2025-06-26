/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:19:19 by chrleroy          #+#    #+#             */
/*   Updated: 2025/01/14 10:15:09 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Appends s2 to the joined string
char	*join_s1(const char *s1, char *joined)
{
	size_t	string_index;

	string_index = 0;
	while (s1[string_index] != '\0')
	{
		*joined = s1[string_index];
		string_index++;
		joined++;
	}
	return (joined);
}

//Appends s1 to the joined string
char	*join_s2(const char *s2, char *joined)
{
	size_t	string_index;

	string_index = 0;
	while (s2[string_index] != '\0')
	{
		*joined = s2[string_index];
		string_index++;
		joined++;
	}
	return (joined);
}

//New version
//Joins 2 string and handle more edge cases
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	size_t	size;

	joined = "";
	if (s1 != NULL && s2 != NULL)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		joined = (char *)malloc(sizeof(char) * (size + 1));
		if (joined)
		{
			join_s1(s1, joined);
			join_s2(s2, joined + ft_strlen(s1));
			joined[size] = '\0';
		}
		return (joined);
	}
	else if (s1 != NULL || s2 != NULL)
	{
		if (s1 != NULL)
			return (ft_strdup(s1));
		return (ft_strdup(s2));
	}
	return (joined);
}
