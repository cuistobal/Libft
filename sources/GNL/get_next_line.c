/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrleroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:46:33 by chrleroy          #+#    #+#             */
/*   Updated: 2025/01/14 09:59:26 by chrleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Cette fonction doit recuperer le buffer et le separer entre la ligne renvoyee
//et le trop lu dans la statique.
char	*set_line(char *line)
{
	char	*overread;
	int		i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (NULL);
	overread = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*overread == '\0')
	{
		free (overread);
		return (NULL);
	}
	line[i + 1] = '\0';
	return (overread);
}

//Cette fonction lis le fichier jusqu'a trouver un '\n' dans le buffer.
char	*fill_line_buffer(int fd, char *overread, char *buffer)
{
	ssize_t	read_file;
	char	*temp;

	read_file = 1;
	while (read_file > 0)
	{
		read_file = read(fd, buffer, BUFFER_SIZE);
		if (read_file == -1)
		{
			free(overread);
			return (NULL);
		}
		else if (read_file == 0)
			break ;
		if (!overread)
			overread = ft_strdup("");
		buffer[read_file] = '\0';
		temp = overread;
		overread = ft_strjoin(temp, buffer);
		free (temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (overread);
}

//Cette fonction fais le parsing malloc et renvoie les lignes.
char	*get_next_line(int fd)
{
	static char	*overread;
	char		*buffer;
	char		*line;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer)
	{
		if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		{
			free(overread);
			free(buffer);
			overread = NULL;
			buffer = NULL;
			return (NULL);
		}
		line = fill_line_buffer(fd, overread, buffer);
		free (buffer);
		buffer = NULL;
		if (!line)
			return (NULL);
		overread = set_line(line);
		return (line);
	}
	return (buffer);
}
