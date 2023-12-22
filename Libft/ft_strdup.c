/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:16:44 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/22 09:20:35 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		length;
	char	*str;

	i = 0;
	length = 0;
	while (s[length])
		length++;
	str = malloc(sizeof(*str) * (length + 1));
	if (!str) 
		return (NULL);
	if (str != NULL)
	{
		while (s[i])
		{
			str[i] = s[i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	str[] = "    ";
	printf("%s", ft_strdup(str));
}*/
