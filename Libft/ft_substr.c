/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:46:35 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 09:03:01 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str) 
		return (NULL);
	i = start;
	j = 0;
	while (s[i + j] && j < len)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	char	str[] = "Yae Miko is here";
	ft_substr(str, 4, 4);
	printf("%s", ft_substr(str, 4, 4));
		
}*/
