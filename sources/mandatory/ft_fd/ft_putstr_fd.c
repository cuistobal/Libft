/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:06:32 by chrleroy          #+#    #+#             */
/*   Updated: 2024/05/28 18:03:27 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*
int	main()
{
	int fd = 1;
	char *s = "J'aime les pommes";
	ft_putstr_fd(s, fd);
}*/
