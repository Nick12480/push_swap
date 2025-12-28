/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:32:28 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/19 17:54:56 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
// 	char str1[] = "hello world";
// 	char str2[] = "test";

// 	printf("Original: %s\n", str1);
// 	ft_striteri(str1, capitalize_even);
// 	printf("Nach capitalize_even: %s\n\n", str1);

// 	printf("String mit Indizes: ");
// 	ft_striteri(str2, print_with_index);
// 	printf("\n");

// 	return (0);
// }