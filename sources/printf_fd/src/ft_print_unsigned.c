/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:43:04 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:29:53 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

void	putnbr_unsigned(unsigned int num, char format, int fd)
{
	char	*base;
	int		base_len;

	base = ft_base_attribution(format);
	base_len = ft_strlen(base);
	if (num > 9)
		putnbr_unsigned(num / base_len, format, fd);
	write(fd, &base[num % 10], 1);
}

int	ft_print_unsigned(unsigned long long num, char format, int fd)
{
	putnbr_unsigned(num, format, fd);
	return (ft_num_len(num, ft_base_attribution(format)));
}
