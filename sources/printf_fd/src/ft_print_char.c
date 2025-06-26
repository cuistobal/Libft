/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:41:22 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:29:10 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

int	ft_print_char(int c, int fd)
{
	char	casted_c;

	casted_c = (char)c;
	ft_putchar_fd(casted_c, fd);
	return (1);
}
