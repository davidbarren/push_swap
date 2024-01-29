/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:50:15 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/19 15:50:16 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    action_swap (t_stack  **stack)
{
t_stack *first;
t_stack *second;
t_stack *third = NULL;

if (*stack == NULL || (*stack)->next == NULL)
    return ;
first = *stack;
second = (*stack)->next;
if ((*stack)->next->next)
{
    third = (*stack)->next->next;
    first->next = third;
    third->prev = first;
}
else
    first->next = NULL;
first->prev = second;
second->prev = NULL;
second->next = first;
*stack = second;

write(1, "swap\n", 5);
}

void    action_rotate(t_stack **stack)
{
    t_stack *old_top;
    t_stack *new_top;
    t_stack *old_bottom;

    old_bottom = get_last_node(*stack);
    old_top = *stack;
    new_top = old_top->next;
    old_top->next = NULL;
    old_top->prev = old_bottom;
    old_bottom->next = old_top;
    new_top->prev = NULL;
    *stack = new_top;

    write(1, "rotate\n",7);
}

void    action_reverse_rotate(t_stack **stack)
{
    t_stack *old_top;
    t_stack *old_bottom;

    old_bottom = get_last_node(*stack);
    old_top = *stack;
    old_bottom->next = old_top;
    old_bottom->prev->next= NULL;
    old_bottom->prev = NULL;
    old_top->prev = old_bottom;
    *stack = old_bottom;

    write(1, "rrotate\n", 8);
}

void    action_push(t_stack **receiver, t_stack **sender)
{
    t_stack *top_receiver;
    t_stack *top_sender;
    
    if (!*sender)
        return ;
    top_receiver = *receiver;
    top_sender = *sender;
    if (top_sender->next)
    top_sender->next->prev = NULL;
    (*sender) = top_sender->next;
    if (*receiver)
        {
        top_sender->next = top_receiver;
        top_receiver->prev = top_sender;
        }
    else 
        top_sender->next = NULL;
    *receiver = top_sender;
    write (1, "push\n", 5);
}