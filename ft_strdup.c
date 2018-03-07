/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:16:09 by famartin          #+#    #+#             */
/*   Updated: 2018/03/06 14:39:51 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	if (!(tmp = ft_strnew(ft_strlen(s1))))
	{
		return (NULL);
	}
	ft_strncpy(tmp, s1, ft_strlen(s1));
	return (tmp);
}
