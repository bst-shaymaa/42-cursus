/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:11:48 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/25 10:32:06 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;
	void	*tmp;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = f(lst->content); 
		new_lst = ft_lstnew(tmp);
		if (!new_lst)
		{
			del(tmp);
			ft_lstclear(&head, del);
			return (new_lst);
		}
		ft_lstadd_back(&head, new_lst);
		lst = lst->next;
	}
	return (head);
}

/*void del(void *content)
{
	free(content);
}

void *increment(void *content)
{
	int *value = (int *)content;
	(*value)++;
	return (value);
}

int main()
{
	t_list *lst = NULL;
	int arr[] = {1, 2, 3, 4, 5};
	int i = 0;

	while (i < 5)
	{
		t_list *node = ft_lstnew(&arr[i]);
		ft_lstadd_back(&lst, node);
		i++;
	}

	t_list *new_lst = ft_lstmap(lst, increment, del);

	t_list *temp = new_lst;
	while (temp)
	{
		printf("%d ", *(int *)(temp->content));
		temp = temp->next;
	}
	return (0);
}*/
