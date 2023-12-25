/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:05:04 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 12:41:04 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr > 9)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putchar_fd((nbr % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((nbr + '0'), fd);
}

/*int main(void)
{
	ft_putnbr_fd(12345, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(-12345, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
}*/
