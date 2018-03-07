/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:15:20 by famartin          #+#    #+#             */
/*   Updated: 2018/03/07 13:32:38 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*src_ptr;
	char		*dst_ptr;
	size_t		i;

	i = -1;
	src_ptr = (char *)src;
	dst_ptr = (char *)dst;
	if (src_ptr < dst_ptr)
	{
		while ((int)(--len) >= 0)
		{
			*(dst_ptr + len) = *(src_ptr + len);
		}
	}
	else
	{
		while (++i < len)
		{
			*(dst_ptr + i) = *(src_ptr + i);
		}
	}
	return (dst);
}
