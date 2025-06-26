/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:52:05 by chrleroy          #+#    #+#             */
/*   Updated: 2024/12/21 11:22:41 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Reworked version.
//This function takes a string as parameter, a start position && the length of
//the returned new_string.
//Sending (string + start) to strndup() would have the same effect
char	*ft_substr(const char *string, unsigned int start, size_t len)
{
	char			*new_string;
	unsigned int	string_len;

	new_string = NULL;
	if (string)
	{
		string_len = ft_strlen(string);
		if (string_len > start)
		{
			if (len > (string_len + start))
				len = string_len + start;
			new_string = (char *)malloc(sizeof(char) * (len + 1));
			if (new_string)
			{
				ft_strlcpy(new_string, string + start, len + 1);
				new_string[len] = '\0';
			}
			return (new_string);
		}
		return (ft_strdup(""));
	}
	return (new_string);
}
