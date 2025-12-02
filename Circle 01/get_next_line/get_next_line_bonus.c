/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:23:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/12/02 16:38:29 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
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
	static char		*left_c[MAX_FD];

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buffer);
		free(left_c[fd]);
		left_c[fd] = NULL;
		buffer = NULL;
		return (0);
	}
	line = fill_buffer(fd, left_c[fd], buffer);
	free(buffer);
	if (!line)
		return (NULL);
	left_c[fd] = set_line(line);
	return (line);
}

void	fill_joint(char *joint, char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[j])
		joint[i++] = s1[j++];
	j = 0;
	while (s2[j])
		joint[i++] = s2[j++];
	joint[i] = '\0';
}