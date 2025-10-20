/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:52:47 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/05 15:14:30 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joint;

	if (!s1 || !s2)
		return (NULL);
	s1_len = (ft_strlen(s1));
	s2_len = (ft_strlen(s2));
	joint = malloc(s1_len + s2_len + 1);
	if (!joint)
		return (NULL);
	ft_memcpy(joint, s1, s1_len);
	ft_memcpy(joint + s1_len, s2, s2_len);
	joint[s1_len + s2_len] = 0;
	return (joint);
}
