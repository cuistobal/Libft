/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_fd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:30:18 by chrleroy          #+#    #+#             */
/*   Updated: 2025/01/14 10:16:43 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_FD_H
# define PRINTF_FD_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include "libft.h"

//Printf_fd

int		ft_printf_fd(int fd, char *toprint, ...);
int		ft_print_char(int c, int fd);
int		ft_print_string(char *s, int fd);
int		ft_print_number_base(int num, char format, int fd);
int		ft_print_unsigned(unsigned long long num, char format, int fd);
int		ft_print_pointer(unsigned long long num, int fd);
int		ft_print_hexa(unsigned int num, char format, int fd);

//Utilities

char	*ft_base_attribution(char format);
void	ft_putnbr_base(long long int nbr, char format, int fd);
int		ft_num_len(unsigned int num, char *base);

#endif
