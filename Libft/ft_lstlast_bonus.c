/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 08:11:11 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/25 10:31:33 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cel;

	cel = lst;
	if (!lst)
		return (NULL);
	while (cel)
	{
		if (cel->next == NULL)
			return (cel);
		cel = cel->next;
	}
	return (cel);
}
/*int main(void)
{
	t_list *lst;
	t_list *lst2;
	t_list *lst3;
	t_list *last;

	lst = ft_lstnew("str");
	lst2 = ft_lstnew("str1");
	lst3 = ft_lstnew("str2");
	ft_lstadd_back(&lst, lst2);
	ft_lstadd_back(&lst, lst3);

	last = ft_lstlast(lst);
	if (last != NULL)
		printf("Last element: %s\n", (char *)last->content);
}*/
