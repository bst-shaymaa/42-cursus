/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:03:28 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/19 09:29:13 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	n;

	n = count * size;
	if (count != 0 && n / count < size)
		return (NULL);
	p = malloc(n);
	if (p == NULL)
		return (p);
	ft_bzero(p, n);
	return (p);
}
/*int    main(void)
{
    char *str = (char *)ft_calloc(1, -2);
    //char *p = (char *)ft_calloc(5, 6);
	printf("%p", str);
}*/
