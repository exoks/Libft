/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:46:22 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 15:46:27 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//void	ft_del(void *pt);

/*  //RECURTION : still need work
void	ft_lstlen(t_list *lst, void (*del)(void *))
{
	t_list	*med;

        if (lst)
        {
		med = lst->next;
		del(lst->content);
        	free(lst);
		lst = med;
		ft_lstlen(lst, del);
        }
}*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*med;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		med = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = med;
	}
	lst = 0;
}
/*
void	ft_del(void *pt)
{
	free(pt);
}

#include <stdio.h>
int	main(void)
{
	t_list	**pt;

	*pt = (t_list *) malloc(sizeof(t_list));
	(*pt)->content = (void *) malloc (7);
	(*pt)->next = (t_list *) malloc (sizeof(t_list));
	ft_lstclear(pt, &ft_del);
	printf("%s\n", (*pt)->content);
	if (pt == NULL)
		printf("good");
	return (0);
}
*/
