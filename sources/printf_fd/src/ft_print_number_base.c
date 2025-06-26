/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:44:25 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:29:26 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

int	ft_print_number_base(int num, char format, int fd)
{
	int			isneg;
	char		*base;
	long int	llnum;

	llnum = (long int)num;
	base = ft_base_attribution(format);
	isneg = 0;
	if (llnum == 0)
		return (write(fd, "0", 1));
	if (llnum < 0)
	{
		llnum = -llnum;
		isneg = 1;
		ft_putchar_fd('-', fd);
	}
	ft_putnbr_base(llnum, format, fd);
	return (ft_num_len(llnum, base) + isneg);
}
