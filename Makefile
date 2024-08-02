# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malanglo <malanglo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 20:51:32 by malanglo          #+#    #+#              #
#    Updated: 2023/11/29 09:39:14 by malanglo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_split.c \
			ft_substr.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_tolower.c \
			ft_toupper.c \

OBJECTS = $(SOURCES:.c=.o)

BONUS = 	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \

OBJECTS_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): 		${OBJECTS}
		ar rcs ${NAME} ${OBJECTS}

.c.o: 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all

bonus:	${OBJECTS} $(OBJECTS_BONUS)
		ar rcs $(NAME) ${OBJECTS} $(OBJECTS_BONUS)

.PHONY: all clean fclean re bonus

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
# 	gcc -nostartfiles -shared -o libft.so $(OBJECTS) $(OBJECTS_BONUS)