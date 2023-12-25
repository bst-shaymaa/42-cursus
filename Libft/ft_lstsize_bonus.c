/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 08:01:25 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/25 10:35:13 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*cel;

	if (!lst)
		return (0);
	count = 0;
	cel = lst;
	while (cel)
	{
		cel = cel->next;
		count++;
	}
	return (count);
}

/*void del(void *content)
{
	free(content);
}
int main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;

	
	lst = ft_lstnew("str");
	lst2 = ft_lstnew("str1");
	lst3 = ft_lstnew("str2");
	ft_lstadd_back(&lst, lst2);
	ft_lstadd_back(&lst, lst3);

	printf("%d\n", ft_lstsize(lst));
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
	
}*/