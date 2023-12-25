/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:05:02 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/25 10:33:50 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *lst;
	t_list *lst2;
	t_list *lst3;

	lst = ft_lstnew("str");
	lst2 = ft_lstnew("str1");
	lst3 = ft_lstnew("str2");
	ft_lstadd_back(&lst, lst2);
	ft_lstadd_back(&lst, lst3);

	ft_lstiter(lst, print_content);
}*/