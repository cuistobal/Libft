/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:44 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/07 13:50:20 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*casted_dest;
	char	*casted_src;

	casted_dest = (char *)dest;
	casted_src = (char *)src;
	if (dest == src)
		return (dest);
	while (n > 0)
	{
		*casted_dest = *casted_src;
		casted_src++;
		casted_dest++;
		n--;
	}
	return (dest);
}
