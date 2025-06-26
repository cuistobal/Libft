/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:35:30 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/05 12:15:07 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		size++;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	size_t	size;

	nbr = n;
	size = ft_size(n);
	if (n < 0)
	{
		nbr *= -1;
		size++;
	}
	result = malloc(sizeof(char) * size + 1);
	if (!result)
		return (0);
	result[size] = '\0';
	while (size--)
	{
		result[size] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	long	n = -10;
	char*	i = ft_itoa(n);

	printf("%s", i);
	printf("%c", '\n');
	free (i);
}*/
