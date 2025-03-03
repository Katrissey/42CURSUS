# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 16:15:16 by rocgarci          #+#    #+#              #
#    Updated: 2025/03/03 18:21:02 by rocgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = libft.a

# Compilador y banderas de compilación (FLAGS)
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Colores                                       
GREEN = \e[0;32m
RED = \e[0;91m	
NC = \e[0m

# Archivos fuente y archivos objeto
SRC = ft_atoi.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlen.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_itoa.c \
	ft_striteri.c \
	#ft_split.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c//
SRC_BONUS =

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

#Archivo de encabezado
INCLUDE = libft.h

#Variables para crear bibliotecas y crear archivos
AR = ar rcs
RM = rm -f

# Regla por defecto que lo compila todo
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJ)
	$(AR) $@ $^

# Reglas para crear la biblioteca con el bonus y que no haga relink
bonus: .bonus

.bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ-BONUS)
	touch .bonus

# Pasar archivos fuente a archivos objeto (.c -> .o)
%.o: %.c $(INCLUDE)
	@echo "$(GREEN)Compilando objetos${NC}"
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para eliminar todos los archivos objeto creados
clean:
	@echo "$(RED)-------------Eliminando objetos y archivo ".bonus"-------------${NC}"
	$(RM) $(OBJ) $(OBJ_BONUS) .bonus

# Regla para eliminar la biblioteca y los archivos objeto
fclean: clean
	$(RM) $(NAME)

# Regla para eliminar todo y volver a compilar
re: fclean all

# Regla para que no se confunda con un archivo
.PHONY: all clean fclean re