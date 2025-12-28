/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:38:39 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/18 09:07:27 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	f;

	f = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			f = i;
		i++;
	}
	if (s[i] == (char ) c)
		return ((char *)(s + i));
	if (f == -1)
		return (NULL);
	return ((char *)(s + f));
}

// int main ()
// {
// 	printf("%s\n", ft_strrchr("abbbbaassa", 's'));
// 	printf("%s\n", strrchr("abbbbaassa", 's'));
// }
