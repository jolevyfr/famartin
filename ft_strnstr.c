/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 15:28:48 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 18:33:18 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			right;

	i = -1;
	right = 1;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*(haystack + ++i) && i < len)
	{
		j = 0;
		if (*(haystack + i) == *(needle + 0))
		{
			k = i;
			right = 1;
			while (*(haystack + k) && *(needle + j) && j < len && k < len)
				if (*(haystack + k++) != *(needle + j++))
					right = 0;
			if (right && !*(needle + j))
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
