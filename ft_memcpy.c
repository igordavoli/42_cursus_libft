/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 00:33:58 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/06 23:52:39 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst != NULL && src != NULL && dst != src)
	{
		d = (unsigned char *) dst;
		s = (unsigned char *) src;
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
