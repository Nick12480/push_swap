/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:26:38 by mverzilo          #+#    #+#             */
/*   Updated: 2025/12/12 19:34:47 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr_gnl(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

char	*strjoin_gnl(char *str1, char *str2)
{
	int		x;
	int		tlen;
	char	*buffer;
	char	*temp;

	if (!str1)
		str1 = strdup_ft("");
	if (!str2)
		str2 = "";
	tlen = strlen_gnl(str1) + strlen_gnl(str2);
	buffer = malloc((tlen + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	x = 0;
	temp = str1;
	while (*str1)
		buffer[x++] = *str1++;
	while (*str2)
		buffer[x++] = *str2++;
	free(temp);
	buffer[x] = '\0';
	return (buffer);
}

int	strlen_gnl(char *str)
{
	int	x;

	if (!str)
		return (0);
	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*strdup_gnl(char *s)
{
	char	*str;
	size_t	x;

	if (!s)
		return (NULL);
	x = 0;
	str = malloc((strlen_gnl(s) + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	while (s[x])
	{
		str[x] = s[x];
		x++;
	}
	str[strlen_gnl(s)] = '\0';
	return (str);
}
