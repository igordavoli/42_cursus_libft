/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:26:13 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/01 18:28:19 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

// size_t	ft_strlen(const char *str);
// void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strnlen(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *str++)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	to_add;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strnlen(dst, dstsize);
	srclen = ft_strlen(src);
	to_add = dstsize - dstlen;
	if (dstsize > dstlen + 1)
	{
		if (to_add > srclen)
			memmove(dst + dstlen, src, srclen + 1);
		else
		{
			memmove(dst + dstlen, src, to_add - 1);
			dst[dstsize - 1] = '\0';
		}
	}
	return (dstlen + srclen);
}
