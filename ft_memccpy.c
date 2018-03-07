/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:15:01 by famartin          #+#    #+#             */
/*   Updated: 2018/03/07 13:32:10 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	size_t		i;
	char		*dst_ptr;
	char		*src_ptr;

	i = 0;
	dst_ptr = dst;
	src_ptr = (char *)src;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		if (*((unsigned char *)src + i) == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
