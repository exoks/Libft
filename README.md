# Libft42 #

This project is a C language library that includes over 40 utility functions, designed to enhance standard functionality. It features a Makefile that automates the compilation process, generating both a static (.a) and shared (.so) library for seamless integration into various projects.

## Libft functions: ##

#### Memory Management : ####
* ft_bzero
* ft_calloc
* ft_memccpy 
* ft_memchr
* ft_memcmp
* ft_memmove
* ft_memset

#### String Manipulation : ####
* ft_strcat
* ft_strchr
* ft_strcmp
* ft_strdup
* ft_striteri
* ft_strjoin
* ft_strlcat
* ft_strlcpy
* ft_strlen
* ft_strmapi
* ft_strncmp
* ft_strnstr
* ft_strrchr
* ft_strtrim
* ft_substr
* ft_split
* ft_atoi
* ft_itoa

#### Character Checks : ####
* ft_isalnum
* ft_isalpha
* ft_isascii
* ft_isdigit
* ft_isprint
* ft_tolower
* ft_toupper

#### Linked List Operations : ####
* ft_lstadd_back
* ft_lstadd_front
* ft_lstclear
* ft_lstdelone
* ft_lstiter
* ft_lstlast
* ft_lstmap
* ft_lstnew
* ft_lstsize

#### I/O Operatins : ####
* ft_putchar_fd
* ft_putendl_fd
* ft_putnbr_fd
* ft_putstr_fd
* get_next_line

## Libft Generating ##  

### Static Lib: ( libft.a )
- To generate a staic libft ( libft.a ), Run the following command :
```
make all
```
or 
```
make static
```

### Shared Lib: ( libft.so )
To generate a shared libft ( libft.so ), Run the following shell command :
```
make shared
```
---
