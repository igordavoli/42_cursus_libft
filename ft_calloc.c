/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 03:08:40 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/06 03:09:31 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	t_size;
	void	*mem;

	t_size = count * size;
	if (t_size < 2147483647)
		mem = malloc(t_size);
	else
		return (NULL);
	if (mem)
		bzero(mem, t_size);
	else
		return (NULL);
	return (mem);
}
