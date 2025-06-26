/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:14:32 by chrleroy          #+#    #+#             */
/*   Updated: 2024/12/21 08:34:10 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function returns the length of the string passed as parameter. If the 
//string is NULL, returns -1;
int	ft_strlen(const char *string)
{
	int		index;

	index = 0;
	if (string)
	{
		while (string[index] != '\0')
			index++;
		return (index);
	}
	return (-1);
}
/*
int	main()
{
	const char* s = "J'aime les pommes";
	printf("%zu", ft_strlen(s));
	printf("%c", '\n');
	printf("%zu", strlen(s));
}*/
