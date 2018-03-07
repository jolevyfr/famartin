/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_blank.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 13:13:13 by famartin          #+#    #+#             */
/*   Updated: 2018/03/06 13:13:23 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	if (c == '\r' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f')
		return (1);
	return (0);
}