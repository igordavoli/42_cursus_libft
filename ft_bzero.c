/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:01:06 by idavoli-          #+#    #+#             */
/*   Updated: 2021/09/04 17:38:19 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
