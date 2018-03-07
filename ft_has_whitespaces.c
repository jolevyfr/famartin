/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_whitespaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:35:31 by famartin          #+#    #+#             */
/*   Updated: 2018/02/28 12:35:39 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_has_whitespaces(char *str, int *i, size_t *j)
{
	while (IS_SPACE(*(str + *i)))
		(*i)++;
	while (IS_SPACE(*(str + *j)))
		(*j)--;
	if (*i || *j < ft_strlen(str))
		return (1);
	return (0);
}
