/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:22:19 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/29 16:22:20 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int stack_size(t_stack **stack)
{
    int count;
    t_stack *temp;

    temp = *stack;
    count = 0;
    while (temp)
    {   
        count++;
        temp = temp->next;
    }
    return (count);
}

t_stack *get_stack_min(t_stack **stack)
{
    t_stack *min_node;
    t_stack *iter;
    int num;

    iter = *stack;
    min_node = *stack;
    num = iter->data;
    while (iter->next)
    {
        iter = iter->next;
        if (num > iter->data)
            num = iter->data;
    }
    while (min_node->data != num)
        min_node = min_node->next;
    return (min_node);
}
t_stack *get_stack_max(t_stack **stack)
{
    t_stack *max_node;
    t_stack *iter;
    int num;

    iter = *stack;
    max_node = *stack;
    num = iter->data;
    while (iter->next)
    {
        iter = iter->next;
        if (num < iter->data)
            num = iter->data;
    }
    while (max_node->data != num)
        max_node = max_node->next;
    return (max_node);
}