/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:57:48 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 18:32:15 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int64_t		sum;
	int			neg;

	sum = 0;
	neg = ft_skip_preceding(&str);
	while (*str && ft_isdigit(*str))
	{
		sum *= 10;
		sum += (*str - '0');
		str++;
	}
	return ((int)(sum * neg));
}
