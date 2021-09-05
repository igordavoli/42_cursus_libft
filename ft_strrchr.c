/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:03:49 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 22:36:10 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		s_size;

	ch = c;
	s_size = ft_strlen(s) + 1;
	while (s_size >= 0)
	{
		if (s[s_size] == ch)
			return ((char *)s + s_size);
		s_size--;
	}
	return (NULL);
}
