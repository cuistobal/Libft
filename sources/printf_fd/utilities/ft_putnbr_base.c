/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:47:06 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:51:54 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

void	ft_putnbr_base(long long int num, char format, int fd)
{
	int		base_len;
	char	*base;

	base = ft_base_attribution(format);
	base_len = ft_strlen(base);
	if (num == INT_MIN)
	{
		write(STDOUT_FILENO, "2147483648", 10);
		return ;
	}
	if (num < base_len)
	{
		ft_putchar_fd(base[num], fd);
		return ;
	}
	ft_putnbr_base(num / base_len, format, fd);
	ft_putnbr_base(num % base_len, format, fd);
}
