/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:59:45 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/24 16:59:53 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	**ft_free(char **str)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	start;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s) && j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		result[j++] = ft_substr(s, start, i - start);
		if (!result[j - 1])
			return (ft_free(result));
	}
	result[j] = NULL;
	return (result);
}

/*int main(void)
{
	size_t i = 0;
	const char *str = NULL;
	char **split_array = ft_split(str, ' ');
	if (split_array == NULL || *split_array == NULL)
	{
		printf("error");
		return (1);
	}
	while (split_array[i] != NULL)
	{
		printf("String %zu: %s\n", i, split_array[i]);
		i++;
	}
	ft_free(split_array);
	return (0);
}*/
