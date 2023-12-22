/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 08:11:11 by cbousset          #+#    #+#             */
/*   Updated: 2023/12/17 08:23:06 by cbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cel;

	cel = lst;
	while (cel)
	{
		if (cel->next == NULL)
			return (cel);
		cel = cel->next;
	}
	return (cel);
}
