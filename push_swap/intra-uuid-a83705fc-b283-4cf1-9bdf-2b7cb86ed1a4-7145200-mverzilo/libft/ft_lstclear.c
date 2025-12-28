/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:17:09 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/20 15:42:22 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*no;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		no = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = no;
	}
}
