/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_logic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:38:54 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/25 16:39:04 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void    sort_three(t_stack **stack)
{
    int first;
    int second;
    int third;

    first = (*stack)->data;
    second = (*stack)->next->data;
    third = (*stack)->next->next->data;


    if (first > second && first < third)
        action_swap(stack);
    else if (first > second && second > third)
        {
            action_swap(stack);
            action_reverse_rotate(stack);
        }
    else if (first > second && second < third)
        action_rotate(stack);
    else if (first < second && second > third && third > first)
        {
            action_swap(stack);
            action_rotate(stack);
        }
    else 
        action_reverse_rotate(stack);
}


 void    sort_five(t_stack **stack, t_stack **stack_b)
 {
    t_stack *temp;
    temp = *stack;

    while (stack_size(stack) > 3)
    {
        temp = get_stack_min(stack);
        action_push(stack_b, stack);
    }
 }
 
 void   sort_small(t_stack** stack_a, t_stack **stack_b)
 {
    sort_five(stack_b, stack_a);
    sort_three(stack_a);
 }