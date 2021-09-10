/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:07:20 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/09 22:01:57 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*sub;
	char	*sub_i;
	char	*s_start;

	if (!s)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	s_start = (char *)s;
	s_len = ft_strlen(s);
	sub_i = sub;
	s += start;
	while (((size_t)(s - s_start) < s_len) && len--)
		*sub_i++ = *s++;
	*sub_i = '\0';
	return (sub);
}
