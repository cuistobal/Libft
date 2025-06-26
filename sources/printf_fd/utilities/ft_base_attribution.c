/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_attribution.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:45:12 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:51:12 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

char	*ft_base_attribution(char format)
{
	char	*base;

	if (format == 'p' || format == 'x')
	{
		base = "0123456789abcdef";
		return (base);
	}
	else if (format == 'X')
	{
		base = "0123456789ABCDEF";
		return (base);
	}
	else if (format == 'd' || format == 'i' || format == 'u')
	{
		base = "0123456789";
		return (base);
	}
	return ("NULL");
}
