/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:04:23 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/14 15:34:12 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n )
{
	unsigned char	*p;
	unsigned int	i;

	p = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}

// int main()
// {
// 	printf("%s", memset("123",'3',5));
// 	// printf("%s", ft_memset((void *)123,'a', 2));
// 	return(0);
// }
