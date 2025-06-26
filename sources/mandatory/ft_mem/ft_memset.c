/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:58:03 by chrleroy          #+#    #+#             */
/*   Updated: 2024/05/28 16:01:28 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_s;

	i = 0;
	cast_s = (unsigned char *)s;
	while (i < n)
	{
		cast_s[i] = (unsigned char)c;
		i++;
	}
	return ((void *)cast_s);
}
/* Je ne comprend pas comment tester ce programme
int	main()
{
	void *s = {1, 2, 3, 4, 5, 6, 7, 8};
	int c = '0';
	size_t n = 2;

//	printf("%p", ft_memset(s, c, n));
//	printf("%c", '\n');
	printf("%p", memset(s, c, n));
}*/
