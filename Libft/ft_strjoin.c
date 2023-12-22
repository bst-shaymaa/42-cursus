/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:07:24 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/20 16:19:13 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	str = (char *)malloc(a + b + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, a + b + 1);
	ft_strlcat(str, s2, a + b + 1);
	return (str);
}

/*int	main(void)
{
	char	*str = NULL;
	char	str2[] = "";
	printf("%s", ft_strjoin(str, str2));
}*/