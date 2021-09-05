/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 00:33:58 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 22:31:31 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy( void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
