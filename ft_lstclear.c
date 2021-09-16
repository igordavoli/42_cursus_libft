/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:25:16 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/16 19:09:14 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list **swp_lst;
	t_list *swp_next;
	t_list *lst_i;

	swp_lst = lst;
	lst_i = *lst;
	while (lst_i)
	{
		swp_next = lst_i->next;
		del(lst_i->content);
		free(lst_i);
		lst_i = swp_next;
	}
	swp_lst = NULL;
}
