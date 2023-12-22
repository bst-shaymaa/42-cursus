/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:39:50 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/18 12:57:23 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if (ft_isalpha(n) || ft_isdigit(n))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d", ft_isalnum('A'));
}*/
