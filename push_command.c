/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:58:45 by pgrellie          #+#    #+#             */
/*   Updated: 2024/04/11 18:43:19 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*node2push;

	if (*src == NULL)
		return ;
	node2push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->previous = NULL;
	node2push->previous = NULL;
	if (!*dst)
	{
		*dst = node2push;
		node2push->next = NULL;
	}
	else
	{
		node2push->next = *dst;
		node2push->next->previous = node2push;
		*dst = node2push;
	}
}

void	pa(t_stack **a, t_stack **b, bool print)
{
	push(a, b);
	if (!print)
		write(1, "pa\n", 3);
}

void	pb(t_stack **b, t_stack **a, bool print)
{
	push(b, a);
	if (!print)
		write(1, "pb\n", 3);
}
