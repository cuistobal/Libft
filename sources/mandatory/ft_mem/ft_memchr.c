/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:33:20 by chrleroy          #+#    #+#             */
/*   Updated: 2024/05/30 13:06:27 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *)s;
	while (n--)
	{
		if (*cs == (unsigned char)c)
			return (cs);
		if (n)
			cs++;
	}
	return (0);
}
