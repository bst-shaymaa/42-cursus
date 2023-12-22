/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:14:53 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 09:14:42 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

/*int main(void)
{
	char	str[] = "here we go again";
	char	c = 'g';
	printf("%s", ft_strrchr(str, c));
}*/