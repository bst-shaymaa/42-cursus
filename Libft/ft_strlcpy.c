/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:20:09 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/20 17:59:50 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		if (dstsize > ft_strlen(src))
		{
			while (i < ft_strlen(src))
			{
				dst[i] = src[i];
				i++;
			}
		}
		else
		{
			while (i < dstsize - 1)
			{
				dst[i] = src[i];
				i++;
			}
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	dst[] = "this is a string";
	char	src[] = "what i want to copy";
	ft_strlcpy(dst, src, sizeof(dst));
	printf("%zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s", dst);
}*/
