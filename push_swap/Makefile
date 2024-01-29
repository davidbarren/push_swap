# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 12:05:08 by dbarrene          #+#    #+#              #
#    Updated: 2024/01/18 12:07:16 by dbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

LIBFTPATH = ./libft

LIBFT = $(LIBFTPATH)/libft.a

SRCS = actions.c\
	   error_handling.c\
	   main.c\
	   make_stack.c\
	   sorting_logic.c\
	   stack_helpers.c\

OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	cc -Wall -Wextra -Werror -c $(@:.o=.c) -o $@

$(NAME): $(LIBFTPATH) $(OBJS)
	make -C $(LIBFTPATH)
	cc -g -Wall -Wextra -Werror $(SRCS) libft.a -o $@

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFTPATH)
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFTPATH)
re: fclean $(NAME)

