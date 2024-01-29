/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:40:35 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/18 14:40:37 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include <unistd.h>

void    free_split(char **arguments)
{
    int i;

    i = 0;
    while (arguments[i])
        free(arguments[i++]);
    free(arguments);
    return ;
}

t_stack *get_last_node(t_stack *stack_a)
{
    while (stack_a->next)
        stack_a = stack_a->next;
        return (stack_a);
}

t_stack *append_node_end(t_stack *stack_a, int   nbr)
{
    t_stack *new_node;
    t_stack *last_node;
    t_stack *temp;
    
    temp = stack_a;
    new_node = malloc(sizeof(t_stack));
    if (!new_node)
        return (0); //exit here!
    new_node->data = nbr;
    new_node->next = NULL;
    if (!stack_a)
    {
        stack_a = new_node;
        new_node->prev = NULL;
    }
    else
    {
    last_node = get_last_node(stack_a);
    last_node->next = new_node;
    new_node->prev = last_node;
    }
    return(stack_a);
}

void    make_stack(t_stack  **stack_a, int argc, char **argv)
{
    char **args;
    long nbr;
    int i;
    
    i = 0;
    if (argc == 2)
    {
      args = ft_split(argv[1], ' ');
      if (!check_split(args))
        {
            free_split(args);
            exit(1);
        }
        else
            while (args[i])
        {
            nbr = atol(args[i]);
            if (nbr > INT_MAX || nbr < INT_MIN)
                {
                    ft_printf("wrong input error \n");
                    exit (1);
                }
            *stack_a = append_node_end(*stack_a, nbr);
            i++;
        }
        free_split(args);
    }
    else if (argc > 2)
    {
        i = 1;
        while (i < argc)
        {
            nbr = atol(argv[i]);
            if(nbr > INT_MAX || nbr < INT_MIN)
            {
                ft_printf ("wrong input error \n");
                exit (1);
            }
            *stack_a = append_node_end(*stack_a, nbr);
            i++;
        }
    }
}
