/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:39:17 by mbenaoui          #+#    #+#             */
/*   Updated: 2021/11/23 21:47:44 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*simo;

	simo = malloc(sizeof(t_list));
	if (!simo)
		return (0);
	simo->content = content;
	simo->next = NULL;
	return (simo);
}
