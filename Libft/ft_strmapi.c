/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:18:30 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 09:38:54 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*char	func(unsigned int i, char c)
{
	return (c + i);
}

int main(void)
{
	char const *s = "Hello, World!";
	char *result = ft_strmapi(s, func);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
}*/
