/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:42:45 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:29:45 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

int	ft_print_string(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
