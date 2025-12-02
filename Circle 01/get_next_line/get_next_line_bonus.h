/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:23:08 by tkorytko          #+#    #+#             */
/*   Updated: 2025/12/02 16:36:27 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# define MAX_FD 1024
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *s);
size_t	ft_strlen(char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
void	fill_joint(char *joint, char *s1, char *s2);

char	*get_next_line(int fd);
char	*fill_buffer(int fd, char *left_c, char *buffer);
char	*set_line(char *line_buffer);

#endif // GET_NEXT_LINE_BONUS_H