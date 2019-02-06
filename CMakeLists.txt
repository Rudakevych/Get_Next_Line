cmake_minimum_required(VERSION 3.12)
project(Get_next_line C)

set(CMAKE_C_STANDARD 11)

add_executable(Get_next_line main.c libft/ft_strcmp.c libft/ft_lstadd.c get_next_line.c libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strnew.c libft/ft_memcpy.c libft/ft_lstnew.c libft/ft_strjoin.c libft/ft_memset.c libft/ft_memalloc.c libft/ft_strsub.c libft/ft_putstr.c libft/ft_bzero.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_strlen.c)

add_library(libft.a  SHARED IMPORTED)