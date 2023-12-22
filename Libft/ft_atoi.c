/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:19:54 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/18 15:07:47 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	if (c == (' ') || c == ('\t') || c == ('\r')
		|| c == ('\n') || c == ('\v') || c == ('\f'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int						sign;
	unsigned long long int	nbr;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - '0');
		if (nbr > 9223372036854775807 && sign == -1)
			return (0);
		if (nbr > 9223372036854775807 && sign == 1)
			return (-1);
		str++;
	}
	return (nbr * sign);
}

// int	main(void)
// {
//   	printf("%d\n",ft_atoi("+ 123u45u"));
//   	printf("%d\n",ft_atoi("-456"));
//   	printf("%d\n",ft_atoi("2147483647"));						
// 	printf("%d\n",ft_atoi("18446744073709551614"));
//   	printf("%d\n",ft_atoi("-99999999999999999999"));
// 	printf("%d\n",atoi("+ 123u45u"));
//   	printf("%d\n",atoi("-99999999999999999999"));
// }
