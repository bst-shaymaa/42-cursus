/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:22:10 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/20 16:09:55 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*void maj(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int	main(void)
{
	char str[] = "a";
	ft_striteri(str, maj);
    printf("%s", str);
}*/
