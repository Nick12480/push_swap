/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:35:43 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/18 10:48:49 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	while (n > 0)
	{
		n--;
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int main()
// {
// 	char dest [30]="j";
// 	ft_memcpy(((void*)0), ((void*)0), 3);
// 	printf("%s",dest);
// }