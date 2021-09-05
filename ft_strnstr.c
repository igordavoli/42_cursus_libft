/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:09:17 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 22:36:21 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	n_len;

	h = (char *) haystack;
	n = (char *) needle;
	n_len = strlen(n);
	while (len > 0 && *h)
	{
		if (!ft_strncmp(n, h, n_len) && len > n_len - 1)
			return (h);
		h++;
		len--;
	}
	return (NULL);
}
