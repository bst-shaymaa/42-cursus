/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:34:39 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/18 12:54:10 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main(void)
{
	char buffer[10] = "hello";
	printf("%s\n", buffer);
	ft_bzero(buffer, sizeof(buffer));
	printf("%s\n", buffer);
}*/
