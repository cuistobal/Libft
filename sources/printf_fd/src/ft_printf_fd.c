/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:17:42 by chrleroy          #+#    #+#             */
/*   Updated: 2024/10/23 17:28:58 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_fd.h"

static int	check_format( int fd, char format, va_list arg)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_print_char(va_arg(arg, long int), fd);
	else if (format == 's')
		i += ft_print_string(va_arg(arg, char *), fd);
	else if (format == 'd' || format == 'i')
		i += ft_print_number_base(va_arg(arg, long int), format, fd);
	else if (format == 'x' || format == 'X')
		i += ft_print_hexa(va_arg(arg, unsigned long long), format, fd);
	else if (format == 'u')
		i += ft_print_unsigned(va_arg(arg, unsigned long long), format, fd);
	else if (format == 'p')
		i += ft_print_pointer(va_arg(arg, unsigned long long), fd);
	else if (format == '%')
		i += ft_print_char('%', fd);
	else
	{
		i += ft_print_char('%', fd);
		i += ft_print_char(format, fd);
	}
	return (i);
}

int	ft_printf_fd(int fd, char *toprint, ...)
{
	va_list	arg;
	int		i;
	int		count_print;

	i = 0;
	count_print = 0;
	if (!toprint)
		return (-1);
	va_start(arg, toprint);
	while (toprint[i] != '\0')
	{
		if (toprint[i] == '%' && toprint[i + 1] != '\0')
		{
			count_print += check_format(fd, toprint[i + 1], arg);
			i++;
		}
		else
			count_print += ft_print_char(toprint[i], fd);
		i++;
	}
	va_end (arg);
	return (count_print);
}

// int main ()
// {
// 	char *s = "Coucou les loulous";
// 	int fd = 2;
// 	ft_printf_fd(fd, s);
// }
