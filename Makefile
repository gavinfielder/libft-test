# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfielder <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 13:32:21 by gfielder          #+#    #+#              #
#    Updated: 2019/02/13 21:06:26 by gfielder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
OBJDIR=bin
SRCDIR=src
INCDIR=./
CC=clang
CFLAGS=-Wall -Wextra -Werror

SRC=src/ft_atoi.c \
	src/ft_bzero.c \
	src/ft_isalnum.c \
	src/ft_isalpha.c \
	src/ft_isascii.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_itoa.c \
	src/ft_itoa_base.c \
	src/ft_lstadd.c \
	src/ft_lstcpy_elem.c \
	src/ft_lstdel.c \
	src/ft_lstdelone.c \
	src/ft_lstiter.c \
	src/ft_lstmap.c \
	src/ft_lstnew.c \
	src/ft_lstnew_byref.c \
	src/ft_memalloc.c \
	src/ft_memccpy.c \
	src/ft_memchr.c \
	src/ft_memcmp.c \
	src/ft_memcpy.c \
	src/ft_memdel.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_putchar.c \
	src/ft_putchar_fd.c \
	src/ft_putendl.c \
	src/ft_putendl_fd.c \
	src/ft_putnbr.c \
	src/ft_putnbr_fd.c \
	src/ft_putstr.c \
	src/ft_putstr_fd.c \
	src/ft_strcat.c \
	src/ft_strchr.c \
	src/ft_strclr.c \
	src/ft_strcmp.c \
	src/ft_strcpy.c \
	src/ft_strdel.c \
	src/ft_strdup.c \
	src/ft_strequ.c \
	src/ft_striter.c \
	src/ft_striteri.c \
	src/ft_strjoin.c \
	src/ft_strlcat.c \
	src/ft_strlen.c \
	src/ft_strmap.c \
	src/ft_strmapi.c \
	src/ft_strncat.c \
	src/ft_strncmp.c \
	src/ft_strncpy.c \
	src/ft_strnequ.c \
	src/ft_strnew.c \
	src/ft_strnstr.c \
	src/ft_strrchr.c \
	src/ft_strsplit.c \
	src/ft_strstr.c \
	src/ft_strsub.c \
	src/ft_strtrim.c \
	src/ft_tolower.c \
	src/ft_toupper.c

# Corresponding list of object files contained in bin/
# OBJ:=$(shell echo $(SRC) | sed 's/$(SRCDIR)\//$(OBJDIR)\//g' | sed 's/\.c/\.o/g')
OBJ=bin/ft_atoi.o \
	bin/ft_bzero.o \
	bin/ft_isalnum.o \
	bin/ft_isalpha.o \
	bin/ft_isascii.o \
	bin/ft_isdigit.o \
	bin/ft_isprint.o \
	bin/ft_itoa.o \
	bin/ft_itoa_base.o \
	bin/ft_lstadd.o \
	bin/ft_lstcpy_elem.o \
	bin/ft_lstdel.o \
	bin/ft_lstdelone.o \
	bin/ft_lstiter.o \
	bin/ft_lstmap.o \
	bin/ft_lstnew.o \
	bin/ft_lstnew_byref.o \
	bin/ft_memalloc.o \
	bin/ft_memccpy.o \
	bin/ft_memchr.o \
	bin/ft_memcmp.o \
	bin/ft_memcpy.o \
	bin/ft_memdel.o \
	bin/ft_memmove.o \
	bin/ft_memset.o \
	bin/ft_putchar.o \
	bin/ft_putchar_fd.o \
	bin/ft_putendl.o \
	bin/ft_putendl_fd.o \
	bin/ft_putnbr.o \
	bin/ft_putnbr_fd.o \
	bin/ft_putstr.o \
	bin/ft_putstr_fd.o \
	bin/ft_strcat.o \
	bin/ft_strchr.o \
	bin/ft_strclr.o \
	bin/ft_strcmp.o \
	bin/ft_strcpy.o \
	bin/ft_strdel.o \
	bin/ft_strdup.o \
	bin/ft_strequ.o \
	bin/ft_striter.o \
	bin/ft_striteri.o \
	bin/ft_strjoin.o \
	bin/ft_strlcat.o \
	bin/ft_strlen.o \
	bin/ft_strmap.o \
	bin/ft_strmapi.o \
	bin/ft_strncat.o \
	bin/ft_strncmp.o
# Make all target
all: $(NAME)

# Make library
$(NAME): $(OBJ)
	ar rs $(NAME) $(OBJ)
	ranlib $(NAME)

# Make object files - this runs for each .o that needs creating
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p bin
	$(CC) -I$(INCDIR) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean:
	make clean
	rm -f libft.a

re:
	make fclean
	make all
