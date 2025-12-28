/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:46:41 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/19 21:00:24 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_fill_negative(char *str, long *t)
{
	str[0] = '-';
	if (*t < 0)
		*t = -(*t);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	t;
	int		start;

	t = n;
	len = ft_count_digits(t);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	start = 0;
	if (t < 0)
	{
		ft_fill_negative(str, &t);
		start = 1;
	}
	len--;
	while (len >= start)
	{
		str[len] = (t % 10) + '0';
		t /= 10;
		len--;
	}
	return (str);
}
