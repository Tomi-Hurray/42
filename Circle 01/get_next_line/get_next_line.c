/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:03:59 by tkorytko          #+#    #+#             */
/*   Updated: 2025/11/22 19:54:24 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*fill_buffer(int fd, char *left_c, char *buffer)
{
	int			n;
	char		*temp;

	n = 1;
	while (n > 0)
	{
		n = read(fd, buffer, 5);
		if (n == -1)
		{
			free(left_c);
			return (NULL);
		}
		if (n == 0)
			break ;
		buffer[n] = 0;
		if (!left_c)
			left_c = ft_strdup("");
		temp = left_c;
		left_c = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_c);
}

char	*set_line(char	*line_buffer)
{
	size_t		i;
	char	*line;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	line = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*line == 0)
	{
		free(line);
		line = NULL;
	}
	line_buffer[i + 1] = 0;
	return (line);
}
