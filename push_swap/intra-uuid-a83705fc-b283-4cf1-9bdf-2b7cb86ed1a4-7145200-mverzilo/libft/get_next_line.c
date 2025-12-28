/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:55:35 by mverzilo          #+#    #+#             */
/*   Updated: 2025/12/12 19:35:00 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_read_l(int fd)
{
	char	*buffer;
	char	*result;
	int		byt_read;

	result = malloc(1);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!result || !buffer)
		return (NULL);
	result[0] = '\0';
	while (1)
	{
		byt_read = read(fd, buffer, BUFFER_SIZE);
		if (byt_read < 0)
			return (free (result), free (buffer), NULL);
		if (byt_read == 0)
			break ;
		buffer[byt_read] = '\0';
		result = strjoin_gnl(result, buffer);
		if (!result)
			return (free (buffer), NULL);
		if (ft_strchr (buffer, '\n'))
			break ;
	}
	return (free (buffer), result);
}

static char	*get_line(char *str)
{
	int		i;
	char	*buffer;

	if (!str || !*str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	buffer = malloc(i + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		buffer[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		buffer[i++] = '\n';
	buffer[i] = '\0';
	return (buffer);
}

static char	*g_left(char *str)
{
	int		i;
	int		j;
	int		l;
	char	*line;

	if (!str)
		return (NULL);
	l = strlen_gnl(str);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	if (i >= l)
		return (free(str), NULL);
	line = malloc(l - i + 1);
	if (!line)
		return (NULL);
	j = 0;
	while (str[i])
		line[j++] = str[i++];
	line[j] = '\0';
	free(str);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*n_data;
	static char	*leftover;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	n_data = ft_read_l(fd);
	if ((!n_data && BUFFER_SIZE < 100) || (!n_data && !leftover))
	{
		leftover = g_left(leftover);
		return (NULL);
	}
	leftover = strjoin_gnl(leftover, n_data);
	free (n_data);
	line = get_line(leftover);
	leftover = g_left(leftover);
	return (line);
}
