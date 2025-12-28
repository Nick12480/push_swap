/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:12:58 by mverzilo          #+#    #+#             */
/*   Updated: 2025/12/12 19:31:47 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	convert_ux(unsigned int n, unsigned int base, const char *symbols)
{
	int	count;

	count = 0;
	if (n >= base)
	{
		count = convert_ux(n / base, base, symbols);
		ft_putchar(symbols[n % base]);
		return (count + 1);
	}
	else if (n < base)
		ft_putchar(symbols[n]);
	return (1);
}

int	convert_p(unsigned long n, unsigned long base, const char *symbols)
{
	int	count;

	if (n == 0)
	{
		return (ft_putstr("(nil)"));
	}
	count = 2;
	ft_putstr("0x");
	count += convert_p_helper(n, base, symbols);
	return (count);
}

int	convert_p_helper(unsigned long n, unsigned long base, const char *symbols)
{
	int	count;

	count = 0;
	if (n >= base)
	{
		count = convert_p_helper(n / base, base, symbols);
		ft_putchar(symbols[n % base]);
		return (count + 1);
	}
	else
	{
		ft_putchar(symbols[n]);
		return (1);
	}
}
