# libft

<h3 align=center>Table o´Contents</h3>
<p align="center">
	~
	<a href="#about">About</a> ~
	<a href="#usage">Usage</a> ~
	<a href="#implementation">Implementation</a> ~
	<a href="#license">License</a>
	~
</p>

# About 

The first foundational project of the `Common Core` curriculum at [[42]], `libft`. A learning exploration of the inner workings of standard (and non-standard) C language functions by writing them from scratch into a custom personal library, `libft`. This is a crucial project as this library will be useful in many of the following projects of the `Common Core`.

**Disclaimer**: This base code follows a peculiar coding style, to pass the [Norminette](https://github.com/42School/norminette) test, a requirement at [[42]].

> Important: If you happen to be a student at 42, you are encouraged to go through the process of writing these functions and testing them yourself. Feel free to use this repository as a research source, but beware of `copy paste`, do not use code you only understand partially! If you passed the piscine you should be able to complete this project successfully. Be thorough, be persistent and be patient with yourself!

[Add Project Subject]

___
# Usage

## Setup & Compilation 

1. Clone repository:

```sh
git clone git@github.com:PedroZappa/libft.git
```

2. Go inside the project folder and run `make`:

```sh
cd libft
make
```

3. To use the library on your code base `#include` the following header:

```c
#include "libft.h"
```

___
## Makefile rules

- To compile `libft` with **mandatory** files:

```sh
make
```

- To compile `libft` with **bonus** files:

```sh
make bonus
```

- To compile **mandatory** & **bonus** files:

```sh
make all
```

- To clean the working directory of **object files** (**.o**):

```sh
make clean
```

- To clean the working directory of **object files** (**.o**) and **executable** (**.a**) files:

```sh
make fclean
```

___
## Implementation Details

This project is divided in three sections:
- **Mandatory Part 1**, a selection of `23` `libc` functions;
- **Mandatory Part 2**, `11` more non-standard or modified-standard functions;
- plus a **Bonus Part** implementing a final set of `9` functions to facilitate the manipulation of lists;

___
### Mandatory Part 1

- [x] `ft_isalpha`
- [x] `ft_isdigit`
- [x] `ft_isalnum`
- [x] `ft_isascii`
- [x] `ft_isprint`
- [x] `ft_strlen`
- [x] `ft_memset`
- [x] `ft_bzero`
- [x] `ft_memcpy`
- [x] `ft_memmove`
- [x] `ft_strlcpy`
- [x] `ft_strlcat`
- [x] `ft_toupper`
- [x] `ft_tolower`
- [ ] `ft_strchr`
- [ ] `ft_strrchr`
- [ ] `ft_strncmp`
- [x] `ft_memchr`
- [ ] `ft_memcmp`
- [ ] `ft_strnstr`
- [ ] `ft_atoi`
- [ ] `ft_calloc`
- [ ] `ft_strdup`

### Mandatory Part 2

- [ ] `ft_substr`
- [ ] `ft_strjoin`
- [ ] `ft_strtrim`
- [ ] `ft_split`
- [ ] `ft_itoa`
- [ ] `ft_strmapi`
- [ ] `ft_striteri`
- [ ] `ft_putchar_fd`
- [ ] `ft_putstr_fd`
- [ ] `ft_putendl_fd`
- [ ] `ft_putnbr_fd`

### Bonus Part

- [ ] `ft_lstnew`
- [ ] `ft_lstadd_front`
- [ ] `ft_lstsize`
- [ ] `ft_lstlast`
- [ ] `ft_lstadd_back`
- [ ] `ft_lstdelone`
- [ ] `ft_lstclear`
- [ ] `ft_lstiter`
- [ ] `ft_lstmap`

___
### License

This work is published under the terms of <a href="https://github.com/PedroZappa/libft/blob/master/LICENSE">42 Unlicense</a>.
