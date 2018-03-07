/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:51:44 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 13:53:36 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
	{
		return (NULL);
	}
	new_str = ft_strnew(len);
	if (!new_str)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		*(new_str + i++) = *(s + start++);
	}
	return (new_str);
}
