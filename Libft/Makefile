# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbousset <cbousset@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 09:24:51 by cbousset          #+#    #+#              #
#    Updated: 2023/12/22 10:03:16 by cbousset         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = cc $(CFLAGS)
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

FILES = ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_memset.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BNS = 	ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		
SRCS		= $(FILES)

SRCS_BNS	= $(BNS)
	
OBJS		= $(SRCS:.c=.o)

OBJS_BNS	= $(SRCS_BNS:.c=.o)


$(NAME): $(OBJS) 
	ar rc $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS) $(OBJS_BNS) 
	ar rc $(NAME) $(OBJS) $(OBJS_BNS) 

clean:
	rm -f $(OBJS) $(OBJS_BNS)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re
