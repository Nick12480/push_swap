/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:22:55 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/18 09:05:53 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function copies exactly 'size' amount of elements
 * from parameter named src into the parameter named dest,
 * @brief Copies size elements into dest, src
 * @param dest destination array
 * @param src source array
 * @param size the amount of elements
 * @return  the pointer of the array that has the coppied elements
 * @warning Does not allocate internal memmory (no malloc)
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size > ft_strlen(src))
		size = ft_strlen(src) + 1;
	while (src[i] != '\0' && i + 1 < (int) size)
	{
		dest[i] = src[i];
		i++;
	}
	if ((int) size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
