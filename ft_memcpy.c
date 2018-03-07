/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:14:43 by famartin          #+#    #+#             */
/*   Updated: 2018/03/07 13:31:44 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
		i++;
	}
	return (dst);
}
