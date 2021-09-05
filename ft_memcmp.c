/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:03:49 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 22:30:55 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				diff;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	diff = 0;
	while (n-- > 0)
	{
		if (*str1 != *str2)
			diff = *str1 - *str2;
		str1++;
		str2++;
	}
	return (diff);
}
