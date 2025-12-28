/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:20:03 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/20 14:23:15 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n )
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (n > 0)
	{
		*p = (unsigned char)0;
		p++;
		n--;
	}
}
