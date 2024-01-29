/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:26:21 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/10 11:40:21 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define	PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include "libft/includes/libft.h"
#include <limits.h>


typedef	struct	s_stack
{
	int 			data;
    int             *cost;
    int             *index;
    struct  s_stack *next;
    struct  s_stack *prev;
}					t_stack;

t_stack *append_node_end(t_stack *stack_a, int   nbr);
t_stack *get_last_node(t_stack *stack_a);
int    check_dups(t_stack *stack_a, int nbr);
void    make_stack(t_stack  **stack_a, int argc, char **argv);
void    error_exit(int argc);
int    check_args(int argc, char **argv);
int check_split(char **args);
void    action_swap (t_stack  **stack);
void    action_push(t_stack **receiver, t_stack **sender);
void    action_rotate(t_stack **stack);
void    action_reverse_rotate(t_stack **stack);
void    sort_three(t_stack **stack);
t_stack *get_stack_min(t_stack **stack);
int stack_size(t_stack **stack);
t_stack *get_stack_max(t_stack **stack);
void   sort_small(t_stack** stack_a, t_stack **stack_b);
void   sort_five(t_stack **stack, t_stack **stack_b);

#endif