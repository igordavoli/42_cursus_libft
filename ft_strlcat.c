/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:26:13 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/08 02:53:06 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	int		to_add;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	to_add = dstsize - dstlen - 1;
	if (dstsize - 1 == dstlen)
		return (dstlen + srclen);
	if (!dstsize || ((dstsize - 1) <= dstlen))
		return (srclen + dstsize);
	if ((dstsize - 1) > (dstlen + srclen))
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, to_add);
		if (dstsize != 0)
			dst[dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}
