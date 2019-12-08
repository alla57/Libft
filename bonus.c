/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:37:10 by alboumed          #+#    #+#             */
/*   Updated: 2019/11/12 20:17:25 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list;

	if(!(list = malloc(sizeof(*list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

t_list	*ft_lst(void *content, t_list *nxt)
{
	t_list *list;

	if(!(list = malloc(sizeof(*list))))
		return (NULL);
	list->content = content;
	list->next = nxt;
	return (list);
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

int		ft_lstsize(t_list *lst)
{
	int nb;

	nb = 1;
	while (lst->next)
	{
		lst = lst->next;
		nb++;
	}
	return (nb);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list *lastlst;

	lastlst = lst;
	while (lastlst->next)
		lastlst = lastlst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = *alst;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;
}
/*
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}
*/
/*
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = *lst->next;
		(*del)(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
}

int main()
{
	int a = 0;
	int b = 1;
	int c = -1;
	t_list *lst = ft_lst(&b, ft_lstnew(&a));
	t_list **first = &lst;
	t_list *lst2 = malloc(sizeof(*lst2));
	lst2->content = &c;
	lst2->next = NULL;
	ft_lstadd_front(first, lst2);
	ft_lstlast(lst2);
	
	t_list *lst3 = malloc(sizeof(*lst3));
	lst3->content = &c;
	lst3->next = NULL;
	ft_lstadd_back(first, lst3);
	return (0);
}
