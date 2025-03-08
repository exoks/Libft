# **Libft42**

This project is a C language library that includes over **40 utility** functions, designed to enhance standard functionality. It features a **Makefile** that automates the compilation process, generating both a **static** (`.a`) and **shared** (`.so`) library for seamless integration into various projects.

## **Available Functions**

### **Memory Management**
- `ft_bzero` – Sets a memory block to zero  
- `ft_calloc` – Allocates and initializes memory  
- `ft_memccpy` – Copies memory until a specific byte is encountered  
- `ft_memchr` – Locates a byte in a memory block  
- `ft_memcmp` – Compares memory blocks  
- `ft_memmove` – Moves memory safely, even with overlapping regions  
- `ft_memset` – Fills memory with a specified byte  

### **String Manipulation**
- `ft_strcat` – Concatenates two strings  
- `ft_strchr` – Locates a character in a string  
- `ft_strcmp` – Compares two strings  
- `ft_strdup` – Duplicates a string  
- `ft_striteri` – Applies a function to each character of a string (indexed)  
- `ft_strjoin` – Concatenates two strings with memory allocation  
- `ft_strlcat` – Concatenates strings with a size limit  
- `ft_strlcpy` – Copies a string with a size limit  
- `ft_strlen` – Calculates the length of a string  
- `ft_strmapi` – Applies a function to each character of a string  
- `ft_strncmp` – Compares two strings up to `n` characters  
- `ft_strnstr` – Finds a substring within a string (bounded)  
- `ft_strrchr` – Finds the last occurrence of a character in a string  
- `ft_strtrim` – Trims specific characters from both ends of a string  
- `ft_substr` – Extracts a substring from a string  
- `ft_split` – Splits a string into an array of substrings  
- `ft_atoi` – Converts a string to an integer  
- `ft_itoa` – Converts an integer to a string  

### **Character Classification & Conversion**
- `ft_isalnum` – Checks if a character is alphanumeric  
- `ft_isalpha` – Checks if a character is alphabetic  
- `ft_isascii` – Checks if a character belongs to the ASCII set  
- `ft_isdigit` – Checks if a character is a digit  
- `ft_isprint` – Checks if a character is printable  
- `ft_tolower` – Converts an uppercase character to lowercase  
- `ft_toupper` – Converts a lowercase character to uppercase  

### **Linked List Operations**
- `ft_lstadd_back` – Adds a node at the end of a list  
- `ft_lstadd_front` – Adds a node at the beginning of a list  
- `ft_lstclear` – Clears an entire linked list  
- `ft_lstdelone` – Deletes a single node from a list  
- `ft_lstiter` – Iterates over a linked list and applies a function  
- `ft_lstlast` – Retrieves the last node in a linked list  
- `ft_lstmap` – Applies a function to each node and creates a new list  
- `ft_lstnew` – Creates a new linked list node  
- `ft_lstsize` – Counts the number of nodes in a list  

### **File I/O Operations**
- `ft_putchar_fd` – Writes a character to a file descriptor  
- `ft_putendl_fd` – Writes a string followed by a newline to a file descriptor  
- `ft_putnbr_fd` – Writes an integer to a file descriptor  
- `ft_putstr_fd` – Writes a string to a file descriptor  
- `get_next_line` – Reads a line from a file descriptor  

## **Building the Library**

Libft supports both **static** and **shared** library generation through the provided **Makefile**.

### **Generating a Static Library (`libft.a`)**
To compile the **static** version of the library, run:
```sh
make
``````
- Or 

```sh
make static
```
### **Generating a Shared Library (`libft.so`)**
To compile the **static** version of the library, run:
```sh
make shared 
```

## Using the Library ##
To compile your program with `libft`, use one of the following methods:

#### - Direct Linking ####
```bash
cc -Wall -Wextra -Werror -Iinclude test.c libft.a -o foo 
```
Or

#### - Using the Library Flag ####
```bash
cc -Wall -Wextra -Werror -Iinclude test.c -L. -lft -o foo
```

> NOTE  
> - Replace `test.c` with your actual source file.

## Cleanup ##
- To remove Object files, run:
```bash
make clean
```

- To remove `libft.a`, `libft.so` and object files, run:
```bash
make fclean
```

---
