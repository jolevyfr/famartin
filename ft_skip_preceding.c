/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_preceding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 13:16:36 by famartin          #+#    #+#             */
/*   Updated: 2018/03/06 13:16:46 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_skip_preceding(const char **str)
{
	while (ft_is_blank(**str))
		(*str)++;
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	else if (**str == '+')
		(*str)++;
	return (1);
}
