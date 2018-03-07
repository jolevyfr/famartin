/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:15:38 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 18:39:52 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s_ptr;
	size_t		i;

	s_ptr = (const char *)s;
	i = -1;
	while (++i < n)
	{
		if (*(s_ptr + i) == (char)c)
		{
			return ((void *)s_ptr + i);
		}
	}
	return (NULL);
}
