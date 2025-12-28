/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:45:44 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/09 21:26:46 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!(('A' <= c && c <= 'Z')
			|| ('a' <= c && c <= 'z')))
		return (0);
	return (1);
}

// int main()
// {
// 	printf("%d",ft_isalpha('A'));
// 	printf("\n%d",ft_isalpha('a'));
// 	printf("\n%d\n",ft_isalpha(' '));
// }