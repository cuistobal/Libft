/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:46:02 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:29:36 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

int	ft_pointer_len(uintptr_t num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

void	ft_put_pointer(uintptr_t num, int fd)
{
	if (num >= 16)
	{
		ft_put_pointer(num / 16, fd);
		ft_put_pointer(num % 16, fd);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', fd);
		else
			ft_putchar_fd(num - 10 + 'a', fd);
	}
}

int	ft_print_pointer(unsigned long long num, int fd)
{
	int	count;

	count = 0;
	if (num == 0)
		count += write(fd, "(nil)", 5);
	else
	{
		count += write(fd, "0x", 2);
		ft_put_pointer(num, fd);
		count += ft_pointer_len(num);
	}
	return (count);
}
