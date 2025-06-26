/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <chrleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:46:30 by chrleroy          #+#    #+#             */
/*   Updated: 2024/12/21 08:35:56 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# ifndef CHAR_OCTET
#  define CHAR_OCTET 1
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

char	*get_next_line(int fd);
char	*fill_line_buffer(int fd, char *left_c, char *buffer);
char	*set_line(char *line_buffer);
char	*ft_realloc(char *ptr, size_t size);

#endif
