/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joint_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:56:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/23 13:56:45 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    action_ss(t_stack **stack_a, t_stack **stack_b)
{
    action_swap(&stack_a);
    action_swap(&stack_b);
}