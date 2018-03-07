/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_word_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:13:46 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 14:35:53 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_word_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
