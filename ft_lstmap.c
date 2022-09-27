/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:55:17 by oezzaou           #+#    #+#             */
/*   Updated: 2022/08/10 15:55:21 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *relst;
        t_list  *med;
	(void) del;

	if (!lst)
		return (0);
        relst = (t_list *) malloc(sizeof(t_list));
        if (!relst)
                return (0);
        med = relst;
        while (lst)
	{
		med->content = f(lst->content);
		med->next = (t_list *) malloc (sizeof(t_list));
		if (!(med->next))
		{
			ft_lstclear(relst, del);
			return (0);
		}
		lst = lst->next;
		med = med->next;
        }
        return (relst);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	int		i;

	(void) del;
	if (!lst)
		return (0);
	list = (t_list *) malloc (sizeof(t_list) * ft_lstsize(lst));
	if (!list)
		return (0);
	i = -1;
	while (lst)
	{
		list[++i].content = f(lst->content);
		if (lst->next != 0)
			list[i].next = &list[i + 1];
		lst = lst->next;
	}
	list[i].next = 0;
	return (list);
}
/*
void	*ft_f(void *lst)
{
	return (lst);
}

void	ft_del(void *content)
{
	free(content);
}

#include <stdio.h>
int	main(void)
{
	t_list *list;
	int	i;
	t_list	*relist;

	list = (t_list *) malloc (sizeof(t_list) * 4);
	if (!list)
		return (0);
	i = -1;
	while (++i < 4)
	{
		list[i].content = "oussama";
		list[i].next = &list[i + 1];
	}
	list[3].content = "max";
	list[3].next = 0;
	printf("%d\n", ft_lstsize(list));
	// value of list pointer
	printf("where : %s\n", list->content);
	relist = ft_lstmap(list, &ft_f, &ft_del);
	while (relist)
	{
		printf("%s\n", relist->content);
		relist = relist->next;
	}
	return (0);
}
*/
