/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:03:49 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 22:33:45 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		s_size;

	ch = c;
	s_size = ft_strlen(s) + 1;
	while (s_size >= 0)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
		s_size--;
	}
	return (NULL);
}
