/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:43:32 by chrleroy          #+#    #+#             */
/*   Updated: 2024/12/22 14:29:20 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *source, const char *comp)
{
	int	index;

	index = 0;
	while (source[index] != '\0' && comp[index] != '\0')
	{
		if (source[index] - comp[index] != 0)
			return (source[index] - comp[index]);
		index++;
	}
	return (source[index] - comp[index]);
}
