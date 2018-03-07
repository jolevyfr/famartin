/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:17:38 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 18:34:00 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	int		right;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	right = 0;
	while (*(haystack + ++i) && !right)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			right = 1;
			while (*(needle + j))
				if (*(needle + j++) != *(haystack + k++))
					right = 0;
			if (right)
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
