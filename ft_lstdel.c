/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 15:49:27 by famartin          #+#    #+#             */
/*   Updated: 2018/03/01 16:03:21 by famartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
	{
		ft_lstdel(&(*alst)->next, del);
	}
	ft_lstdelone(&(*alst), del);
}
