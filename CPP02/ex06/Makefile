# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 03:34:00 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/29 00:36:13 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I ./inc

FILES = main  harl

BDIR = build
OBJS = $(addprefix $(BDIR)/, $(FILES:=.o))

NAME = harlFilter

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(CPP) $(MLXFLAGS) $(OBJS) -o $(NAME)

$(BDIR)/%.o : src/%.cpp
	@mkdir -p $(@D)
	$(CPP) $(CFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf $(BDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all