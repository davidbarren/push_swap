/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:40:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/01/18 14:40:22 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int    check_args(int argc, char **argv)
{
    int i;
    int k;

    i = 1;
    k = 2;

    if (argc > 2)
    {
        while (argv[i])
        {
            k = i + 1;
            while (argv[k])
                {
                    if (!ft_strncmp(argv[i], argv[k], 15))
                    {
                    ft_printf("duplicate error\n");
                    return (0);
                    }
                k++;
                }
            i++;
        }
    }
   return (1);  
}

int check_split(char **args)
{
    int i;
    int k;

    i = 0;
    k = 1;

        while (args[i])
        {
            while (args[k])
                {
                    if (!ft_strncmp(args[i], args[k], 15))
                    {
                    printf("duplicate error\n");
                    return (0);
                    }
                k++;
                }
            i++;
            k = i + 1;
        }
   return (1);  
}