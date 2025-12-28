/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:37:08 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/18 10:07:50 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static long	ft_error_check(int n, int fd)
{
	long	nb;

	nb = n;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		count;
	long	tmp;
	int		k;
	char	c;

	nb = ft_error_check(n, fd);
	if (nb == 0)
		return ;
	count = ft_count(nb);
	while (count > 0)
	{
		tmp = nb;
		k = count - 1;
		while (k > 0)
		{
			tmp /= 10;
			k--;
		}
		c = (tmp % 10) + '0';
		write(fd, &c, 1);
		count--;
	}
}

// #include <fcntl.h>

// int main(void)
// {
// 	int fd;

// 	// Test 1: Ausgabe in stdout (fd = 1)
// 	write(1, "Test 1 - Positive Zahl: ", 24);
// 	ft_putnbr_fd(12345, 1);
// 	write(1, "\n", 1);

// 	// Test 2: Negative Zahl
// 	write(1, "Test 2 - Negative Zahl: ", 24);
// 	ft_putnbr_fd(-6789, 1);
// 	write(1, "\n", 1);

// 	// Test 3: Null
// 	write(1, "Test 3 - Null: ", 15);
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);

// 	// Test 4: INT_MIN
// 	write(1, "Test 4 - INT_MIN: ", 18);
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);

// 	// Test 5: INT_MAX
// 	write(1, "Test 5 - INT_MAX: ", 18);
// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);

// 	// Test 6: Ausgabe in eine Datei
// 	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd != -1)
// 	{
// 		write(1, "Test 6 - Ausgabe in Datei...\n", 30);
// 		ft_putnbr_fd(42, fd);
// 		write(fd, "\n", 1);
// 		ft_putnbr_fd(-100, fd);
// 		write(fd, "\n", 1);
// 		close(fd);
// 		write(1, "Siehe test_output.txt\n", 22);
// 	}

// 	return (0);
// }