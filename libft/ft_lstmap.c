/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croxana <croxana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:56:36 by croxana           #+#    #+#             */
/*   Updated: 2019/05/25 11:19:52 by croxana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*a;
	t_list	*list;

	list = NULL;
	if (!lst || !f)
		return (NULL);
	list = f(lst);
	list->next = NULL;
	lst = lst->next;
	a = list;
	while (lst)
	{
		a->next = f(lst);
		a = a->next;
		a->next = NULL;
		lst = lst->next;
	}
	return (list);
}
