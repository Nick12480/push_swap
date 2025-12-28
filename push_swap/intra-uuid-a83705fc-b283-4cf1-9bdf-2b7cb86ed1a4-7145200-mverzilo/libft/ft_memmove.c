/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:49:34 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/15 15:14:58 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*additional_memmove(unsigned char *d, unsigned char *s, size_t len)
{
	size_t	i;

	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (!len || (unsigned char *)dest == (unsigned char *)src)
		return (dest);
	return (additional_memmove((unsigned char *)dest, (unsigned char *)src,
			len));
}

// int	main(void)
// {
// 	char p[] = "string";
// 	char *p1 = ft_memmove(p + 3, p, 2);
// 	printf("%s\n", p1);
// 	return (0);
// }