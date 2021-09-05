/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:03:49 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 22:22:25 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	diff;

	diff = 0;
	while (n-- > 0 && *s1 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
	}
	return (diff);
}
