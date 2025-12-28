/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:17:54 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/17 13:29:11 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_s = (char *)malloc((len1 + len2 + 1));
	if (!new_s)
		return (NULL);
	ft_memcpy(new_s, s1, len1);
	ft_memcpy(new_s + len1, s2, len2);
	new_s[len1 + len2] = '\0';
	return (new_s);
}

// int main()
// {
// 	printf("%s", ft_strjoin("hi,","hallo\n"));
// }