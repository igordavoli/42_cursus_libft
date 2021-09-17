/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:43:41 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/16 21:23:57 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nd;
	void	*bgn;

	bgn = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		nd = ft_lstnew(f(lst->content));
		if (!nd)
		{
			ft_lstclear(&nd, del);
			return ((t_list *)bgn);
		}
		if (!bgn)
			bgn = (void *)nd;
		lst = lst->next;
		nd = nd->next;
	}
	return ((t_list *)bgn);
}
