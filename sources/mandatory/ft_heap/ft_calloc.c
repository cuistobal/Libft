/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:51:27 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/05 09:52:46 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;

	new = (char *)malloc(size * nmemb);
	if (!new)
		return (NULL);
	ft_memset(new, 0, nmemb * size);
	return (new);
}
