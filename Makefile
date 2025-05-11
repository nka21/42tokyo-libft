# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkojima <nkojima@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 16:47:58 by nkojima           #+#    #+#              #
#    Updated: 2025/05/11 19:47:40 by nkojima          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################################
#            Settings           #
#################################
NAME      = libft.a
CC        = cc
CFLAGS    = -Wall -Wextra -Werror
AR        = ar
ARFLAGS   = rcs
RM        = rm -f

#################################
#         Source & Objects      #
#################################
SRCS 	   = ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_strlen.c \
			 ft_memset.c \
OBJS       = $(SRCS:.c=.o)

#################################
#            Rules              #
#################################
.PHONY: all clean fclean re

all: $(NAME)

# ライブラリ作成：既存のオブジェクトが変わらなければ再生成しない
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

# オブジェクト生成：ヘッダが変更されたら再コンパイル
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
