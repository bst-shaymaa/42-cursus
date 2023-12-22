/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:35:16 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/17 10:02:47 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cel;

	while (*lst && lst)
	{
		cel = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cel;
	}
	lst = NULL;
}
