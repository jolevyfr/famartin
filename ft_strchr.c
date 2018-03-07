/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:17:23 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 18:34:42 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (++i < (int)ft_strlen(s) + 1)
	{
		if (*(s + i) == (char)c)
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}
