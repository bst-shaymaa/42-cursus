/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:35:16 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/24 18:34:53 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cel;

	if (!lst || !del)
		return ;
	while (*lst && lst)
	{
		cel = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cel;
	}
	lst = NULL;
}
