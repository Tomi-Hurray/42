/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:03:59 by tkorytko          #+#    #+#             */
/*   Updated: 2025/11/23 16:38:47 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fill_buffer(int fd, char *left_c, char *buffer)
{
	int			n;
	char		*temp;

	n = 1;
	while (n > 0)
	{
		n = read(fd, buffer, BUFFER_SIZE);
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
	char		*line;

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

char	*get_next_line(int fd)
{
	char			*buffer;
	char			*line;
	static char		*left_c;

	if (fd == 0 || fd < 0 || fd < 1024)
	{
		free(buffer);
		free(left_c);
		free(line);
		return (0);
	}
	left_c = fill_buffer(fd, left_c, buffer);
	line = set_line(left_c);
	return (line);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	dst = dest;
	i = 0;
	while (i < n)
	{
		dst[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
