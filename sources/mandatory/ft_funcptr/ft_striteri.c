/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:27:49 by chrleroy          #+#    #+#             */
/*   Updated: 2024/05/25 13:44:35 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (j < i)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}
