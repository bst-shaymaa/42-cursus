/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:47:05 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 15:19:16 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	printf("%s", ft_memcpy("hiki", "hiki", 4));
}*/