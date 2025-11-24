# <div align="center">Libft</div>
# Libft

Libft is a project from the 42 curriculum. The goal is to re-implement standard C library functions and write utility functions that will be useful for future projects. This library will provide a better understanding of low-level programming, memory management, and algorithmic challenges.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Functions Implemented](#functions-implemented)
- [Acknowledgments](#acknowledgments)

## Introduction

Libft is a custom C library that contains several functions, which are primarily recreations of standard C library functions (from <stdlib.h>, <string.h>, etc.) along with some additional utility functions. This project is designed to help students gain a deeper understanding of C programming, pointers, memory allocation, and function implementation.

## Installation

To use the library, you can clone this repository and compile it using the provided Makefile.

bash
git clone https://github.com/yourusername/libft.git
cd libft
make);


## Functions Implemented

Below is a list of functions that are implemented in this library. These are typically divided into categories based on the type of functionality they provide.

### Part 1 - Libc Functions

These are standard functions from the C library that have been re-implemented:

- ft_memset: Fills a block of memory with a specified value.
- ft_bzero: Sets all bytes in a block of memory to zero.
- ft_memcpy: Copies memory from one location to another.
- ft_memccpy: Copies memory until a specific character is found.
- ft_memmove: Safely copies memory from one location to another, handling overlaps.
- ft_memchr: Searches for a specific byte in a block of memory.
- ft_memcmp: Compares two blocks of memory.
- ft_strlen: Computes the length of a string.
- ft_strdup: Duplicates a string, allocating memory for the new string.
- ft_strcpy: Copies a string to another location.
- ft_strncpy: Copies a specified number of characters from a string.
- ft_strcat: Concatenates two strings.
- ft_strncat: Concatenates a specified number of characters from one string to another.
- ft_strlcat: Appends one string to another with a specified buffer size.
- ft_strchr: Searches for a character in a string.
- ft_strrchr: Searches for the last occurrence of a character in a string.
- ft_strstr: Searches for a substring within a string.
- ft_strnstr: Searches for a substring within a string, but only up to a specified length.
- ft_strcmp: Compares two strings.
- ft_strncmp: Compares two strings, but only up to a specified number of characters.
- ft_atoi: Converts a string to an integer.
- ft_isalpha: Checks if a character is alphabetic.
- ft_isdigit: Checks if a character is a digit.
- ft_isalnum: Checks if a character is alphanumeric.
- ft_isascii: Checks if a character is part of the ASCII set.
- ft_isprint: Checks if a character is printable.
- ft_toupper: Converts a lowercase letter to uppercase.
- ft_tolower: Converts an uppercase letter to lowercase.

### Part 2 - Additional Functions

Some utility functions that are commonly needed in various projects:

- ft_substr: Extracts a substring from a given string.
- ft_strjoin: Concatenates two strings into a new string.
- ft_strtrim: Removes leading and trailing spaces (or other specified characters) from a string.
- ft_split: Splits a string into an array of strings based on a delimiter.
- ft_itoa: Converts an integer to a string.
- ft_putchar: Outputs a character to the standard output.
- ft_putstr: Outputs a string to the standard output.
- ft_putendl: Outputs a string followed by a newline to the standard output.
- ft_putnbr: Outputs an integer to the standard output.
- ft_putchar_fd: Outputs a character to a specified file descriptor.
- ft_putstr_fd: Outputs a string to a specified file descriptor.
- ft_putendl_fd: Outputs a string followed by a newline to a specified file descriptor.
- ft_putnbr_fd: Outputs an integer to a specified file descriptor.

### Part 3 - Bonus Functions

These are additional functions for handling linked lists, implemented as part of the bonus section:

- ft_lstnew: Allocates and returns a new list element.
- ft_lstadd_front: Adds a new element to the beginning of a list.
- ft_lstsize: Returns the number of elements in a list.
- ft_lstlast: Returns the last element of a list.
- ft_lstadd_back: Adds a new element to the end of a list.
- ft_lstdelone: Deletes a specific element from a list.
- ft_lstclear: Deletes and frees all elements from a list.
- ft_lstiter: Iterates over a list and applies a function to each element.
- ft_lstmap: Applies a function to each element of a list and returns a new list.

### Other Helper Functions

If you have implemented any helper functions or additional features, include them here.


## Acknowledgments

A big thank you to the 42 community for their support and collaboration throughout this project. Special thanks to my peers for their invaluable feedback and assistance.
