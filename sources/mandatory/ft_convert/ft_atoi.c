/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:20:18 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/06 15:08:00 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while ((*nptr > 8 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (result * sign);
}
/*
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int	main(void)
{
	printf("%d", ft_atoi("/007 8"));
	printf("%c", '\n');
	printf("%d", atoi("bla"));
	return(0);
}
*/
