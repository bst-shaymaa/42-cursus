/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:12:00 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/25 10:32:38 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cel;

	cel = (struct s_list *)malloc(sizeof(struct s_list));
	if (!cel)
		return (NULL);
	cel->content = content;
	cel->next = NULL;
	return (cel);
}

/*int	main(void)
{
	t_list *new = ft_lstnew("Hello, World!");
	t_list *empty = ft_lstnew(NULL);
}*/