/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:58:03 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:51:22 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

int	ft_num_len(unsigned	int num, char *base)
{
	int		num_len;
	int		base_len;

	num_len = 0;
	base_len = ft_strlen(base);
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num_len++;
		num = num / base_len;
	}
	return (num_len);
}
