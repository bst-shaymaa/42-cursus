/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:02:20 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/21 09:40:37 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	i;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i)
			&& *(needle + i) && i <= n)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}

/*int main (void)
{
	char	str1[10] = "book";
	char	str2[5] = "oo";
	char	str3[5] = "o";
	char	str4[5] = "go";
	char	str5[5] = "og";
	char	str5[5] = "ob";
	char	str6[5] = "ookg";
	printf("book - oo : %p\n", strnstr(str1, str2, 4));
	printf("book - o : %p\n", strnstr(str1, str3, 4));
	printf("book - go : %p\n", strnstr(str1, str4, 4));
	printf("book - og : %p\n", strnstr(str1, str5, 4));
	printf("book - ob : %p\n", strnstr(str1, str5, 4));
	printf("book - ookg : %p\n", strnstr(str1, str6, 4));
	printf("book - oo - 0byte : %p\n", strnstr(str1, str2, 0));
	return (0);
}*/