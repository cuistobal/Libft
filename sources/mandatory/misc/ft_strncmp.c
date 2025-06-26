/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:28:14 by chrleroy          #+#    #+#             */
/*   Updated: 2024/12/21 11:25:02 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *source, const char *comp, size_t n)
{
	int	index;

	index = 0;
	while ((source[index] != '\0' || comp[index] != '\0') && n > 0)
	{
		if (source[index] != comp[index])
			return (source[index] - comp[index]);
		index++;
		n--;
	}
	return (0);
}
