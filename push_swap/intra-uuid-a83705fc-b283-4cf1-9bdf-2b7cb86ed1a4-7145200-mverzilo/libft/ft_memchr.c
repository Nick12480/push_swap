/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:57:04 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/18 09:13:36 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	int				i;
// 	unsigned char	*str;
// 	int				l;

// 	l = n;
// 	i = 0;
// 	l -= 1;
// 	str = (unsigned char *)s;
// 	if (n == 0)
// 		return (NULL);
// 	while (n > 0 || str [i] != '\0')
// 	{
// 		if (str[i] == (char) c)
// 			return (str + i);
// 		if (str[i] != (char) c && i >= l)
// 			return (NULL);
// 		i++;
// 	}
// 	return (str + i);
// }
// int main()
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("%s",ft_memchr(tab, -1, 7));
// 	printf("\n%s", memchr(tab, -1, 2));
// }