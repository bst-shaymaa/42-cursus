/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:30:31 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 09:20:14 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*int main(void)
{
	char	s1[] = "hello world";
	char	s2[] = "hello everyone";
	printf("%d", ft_strncmp(s1, s2, 5));
}*/