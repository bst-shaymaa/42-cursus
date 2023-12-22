/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 08:26:41 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/20 12:05:51 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cel;

	if (*lst == NULL)
		*lst = new;
	else
	{
		cel = *lst;
		while (cel->next != NULL)
			cel = cel->next;
		cel->next = new;
	}
}

/*int main(void)
{
	t_list *lst = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_back(&lst, new);

	t_list *current = lst;
	while (current != NULL)
	{
		printf("Node content: %s\n", (char*)current->content);
		current = current->next;
	}
}*/