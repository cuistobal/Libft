/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 09:54:17 by chrleroy          #+#    #+#             */
/*   Updated: 2024/06/07 12:36:42 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// A la base j avais malloc size_t * strlen() mais etant donne qu on ne strdup
// pas la valeur de content c'est inutile et ca segfault.
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
