/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:15 by mverzilo          #+#    #+#             */
/*   Updated: 2025/12/12 19:31:37 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += format(str, i, args);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	format(const char *str, int i, va_list args)
{
	if (str[i + 1] == '%')
		return (ft_putchar('%'));
	if (str[i + 1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str[i + 1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str[i + 1] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i + 1] == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i + 1] == 'x')
		return (convert_ux(va_arg(args, int), 16, "0123456789abcdef"));
	if (str[i + 1] == 'X')
		return (convert_ux(va_arg(args, int), 16, "0123456789ABCDEF"));
	if (str[i + 1] == 'u')
		return (convert_ux(va_arg(args, int), 10, "0123456789"));
	if (str[i + 1] == 'p')
		return (convert_p(va_arg(args, long), 16, "0123456789abcdef"));
	return (0);
}
