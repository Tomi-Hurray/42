/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:21:20 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/11 13:51:16 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

char addOne(unsigned int i, char c)
{
		return (i + c);
}

void addOne_v(unsigned int i, char *s)
{
		*s += i;
}

int main()
{
	char a;
	unsigned int b;
	const char source[7] = "coucou";
	char dest[20] = "helo";
	char s1[] = {0, 0, 127, 0};
	char s2[] = {0, 0, 42, 0};
	b = 126;
	a = '\n';
	char sus[] = "00000";
	size_t x = 0;
	ft_isalpha(a);
	printf("isalpha: %d\n", ft_isalpha(a));
	ft_isdigit(a);
	printf("isdigit: %d\n", ft_isdigit(a));
	ft_isalnum(a);
	printf("isalnum: %d\n", ft_isalnum(a));
	printf("isascii: %d\n", ft_isascii(b));
	printf("isprint: %d\n", ft_isprint(a));
	printf("strlen: %ld\n", ft_strlen("hello!"));
	// printf("memset: %s\n", ft_memset(&c, 56, 3));
	// b = 4294967295;
	// ft_bzero(&b, 2);
	// printf("%u", b);
	// ft_memcpy(f, e, 6);
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 4));
	// ft_memmove(f, e, 6);
	// printf("ft_memmove: %s\n", f);
	// memmove(f, e, 6);
	printf("ft_memmove: %p\n", ft_memmove(dest, source, 5));
	// printf("ft_strlcpy: %ld\n", ft_strlcpy(f, e, 6));
	// printf("strlcpy: %ld\n", ft_strlcpy(f,e, 5));
	// printf("strlcpy_test: %ld\n", ft_strlcpy_test(f, e, 5));
	printf("strlcpy: %ld\n%s\n", ft_strlcpy(dest, source, x), dest);
	// printf("ft_strlcat %ld\n", ft_strlcat(f, e, 5));
	// ft_strlcat(f, e, 5);
	printf("ft_strlcat %ld\n%s\n", ft_strlcat(dest, source, 9), dest);
	printf("ft_toupper %d\n%c", ft_toupper(100), 100);
	printf("ft_tolower %d\n%c", ft_tolower(80), 80);
	printf("strchr %s\n", ft_strchr(source, '\0'));
	printf("strrchr %s\n", ft_strrchr(source, 'o'));
	printf("strncmp %d\n", ft_strncmp("hello", "heLLo", 3));
	printf("memchr %p\n", ft_memchr("hello!a", 'o', 5));
	printf("memcmp %d\n", ft_memcmp("hello!", "heLlo!", 5));
	printf("strnstr %s\n", ft_strnstr("aaabcabcd", "cd", 8));
	printf("atoi %d\n", ft_atoi("1"));
	printf("calloc %p\n", ft_calloc(5, 3));
	printf("strdup %s\n", ft_strdup("hello!"));
	printf("substr %s\n", ft_substr("hello!", 4, 4200));
	printf("strtrim %s\n", ft_strtrim("abbsiemanobbbbbb", "ab"));

	char	*s = " abb ";
	char	**v = ft_split(s, ' ');
	while (*v)
	{
		printf("split %s\n", *v++);
	}
	printf("itoa %s\n", ft_itoa(0));
	printf("strmapi %s\n", ft_strmapi("1234", addOne));
	ft_striteri(sus, &addOne_v);
	printf("striter %s\n", sus);
	ft_putchar_fd('d', 1);
	ft_putstr_fd("hello!", 1);
	ft_putendl_fd("hello!", 1);
	ft_putnbr_fd(25, 1);
}
