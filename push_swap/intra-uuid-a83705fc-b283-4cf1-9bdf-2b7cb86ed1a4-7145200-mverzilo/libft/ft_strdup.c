/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:18:27 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/18 10:52:58 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*n;

	n = malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (n == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

// int main()
// {
// char source[] = "GeeksForGeeks";

// char* target = strdup(source);

// printf("%s", target);
// return (0);

// 	printf("%s", ft_strdup("abc"));
// 	return(0);
// }