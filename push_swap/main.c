/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:40:47 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/18 14:40:48 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
First step is to set stack A and stack B to NULL, then initialize when needed

Pseudocode for ARGS and errors:
*ARGC needs to be 2 or higher
*If argc is 2 and just one big string we need to split using ' ' as delimiter to split large string into nums
*Also need to parse and check for duplicates

Pseudocode for actions that need to be coded:
*sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
Where: Head will become next and next will become head


*sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.


*ss : sa and sb at the same time.


*pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.


*pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.


*ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.


*rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.


*rr : ra and rb at the same time.


*rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.


*rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.


*rrr : rra and rrb at the same time.


*/
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

int main(int argc, char **argv)
{

    t_stack *stack_a;
    t_stack *stack_b;
    // t_stack *min;
    // t_stack *max;
    int i;

    i = 5;

    stack_a = NULL;
    stack_b = NULL;

    if (!check_args(argc, argv))
        return (0);
    else
    make_stack(&stack_a, argc, argv);
    // while (i--)
    //     action_push(&stack_b, &stack_a);
    // // action_swap(&stack_a);
    //  action_rotate(&stack_a);
    // action_swap(&stack_a);
    // action_reverse_rotate(&stack_a);
    // action_swap(&stack_a);

    // action_push(&stack_b, &stack_a);
    // min = get_stack_min(&stack_a);
    // printf("Testing the min: %d\n", min->data);
    // max = get_stack_max(&stack_a);
    // printf("Testing the max: %d\n", max->data);

    // sort_three(&stack_a);
    sort_five(&stack_a, &stack_b);
    // sort_small(&stack_a, &stack_b);
    while (stack_b)
    {
        printf("Stack B: %d\n", stack_b->data);
        stack_b = stack_b->next;
    }
    while (stack_a)
        {
            printf("Stack A: %d\n", stack_a->data);
            stack_a = stack_a->next;
        }
   
    
    /* if argc is greater than 2, we check the type of the arg then we atoi if it is a string (optional)*/
    return (1);
}
