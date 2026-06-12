/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:05:48 by lfrederi          #+#    #+#             */
/*   Updated: 2022/01/11 16:47:06 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

/*
 * Node of a singly linked list. content points to the data held by
 * the node, next points to the following node (NULL for the last one).
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
 * Allocates and returns a new node initialized with content.
 * The next pointer of the node is set to NULL.
 * Return: the new node, or NULL if allocation failed.
 */
t_list	*ft_lstnew(void *content);

/*
 * Adds the node new at the beginning of the list pointed to by alst
 * (new becomes the first node).
 * Return: nothing.
 */
void	ft_lstadd_front(t_list **alst, t_list *new);

/*
 * Counts the number of nodes in the list.
 * Return: the size of the list (0 if lst is NULL).
 */
int		ft_lstsize(t_list *lst);

/*
 * Walks the list to its end.
 * Return: the last node of the list, or NULL if lst is NULL.
 */
t_list	*ft_lstlast(t_list *lst);

/*
 * Adds the node new at the end of the list pointed to by alst
 * (new becomes the last node).
 * Return: nothing.
 */
void	ft_lstadd_back(t_list **alst, t_list *new);

/*
 * Frees the single node lst: its content is released with the
 * function del (if provided), then the node itself is freed.
 * The next node is not affected.
 * Return: nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/*
 * Deletes and frees every node of the list using ft_lstdelone,
 * then sets the list pointer to NULL.
 * Return: nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/*
 * Iterates over the list and applies the function f to the content
 * of each node.
 * Return: nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*
 * Iterates over the list and builds a new list whose nodes hold the
 * successive results of f applied to each content. If a node
 * allocation fails, the new list is cleared with del.
 * Return: the first node of the new list, or NULL on failure.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
