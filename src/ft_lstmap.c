/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfielder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:25:12 by gfielder          #+#    #+#             */
/*   Updated: 2019/02/13 17:09:22 by gfielder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *tail;

	head = NULL;
	tail = NULL;
	while (lst != NULL)
	{
		if (tail == NULL)
		{
			tail = f(ft_lstcpy_elem(lst));
			if (tail == NULL)
				return (NULL);
			head = tail;
		}
		else
		{
			tail->next = f(ft_lstcpy_elem(lst));
			if (tail->next == NULL)
				return (NULL);
			tail = tail->next;
		}
		lst = lst->next;
	}
	return (head);
}
