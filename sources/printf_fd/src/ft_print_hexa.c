/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:06:57 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:29:18 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

static void	ft_putnbr_hex(unsigned int num, const char format, int fd)
{
	unsigned int	base_len;

	base_len = 16;
	if (num >= base_len)
	{
		ft_putnbr_hex(num / base_len, format, fd);
		ft_putnbr_hex(num % base_len, format, fd);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', fd);
		else
		{
			if (format == 'x')
				ft_putchar_fd(num - 10 + 'a', fd);
			if (format == 'X')
				ft_putchar_fd(num - 10 + 'A', fd);
		}
	}
}

int	ft_print_hexa(unsigned int num, char format, int fd)
{
	if (num == 0)
		return (write(fd, "0", 1));
	else
		ft_putnbr_hex(num, format, fd);
	return (ft_num_len(num, ft_base_attribution(format)));
}
