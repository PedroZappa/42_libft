<a name="readme-top"></a>
<div align="center">
<h1>libft 📔</h1>

<p>( a <a href="https://github.com/42School" target="_blank">42 School</a> Project )</p>

<p>
    <img src="https://img.shields.io/badge/score-...%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/PedroZappa/libft?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/PedroZappa/libft?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/PedroZappa/libft?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/PedroZappa/libft?style=for-the-badge" />
</p>

___

<h3 align=center>Table o´Contents</h3>
	<p>
		~
		<a href="#about">About</a> ~
		<a href="#usage">Usage</a> ~
		<a href="#implementation">Implementation</a> ~
		<a href="#license">License</a> ~
	</p>
<div/>



<div align=left>

# About 📌

The first foundational project of the `Common Core` curriculum at 42, `libft`. A learning exploration of the inner workings of standard and non-standard C language functions by developing them from scratch to put together a custom personal library. This is a crucial project as this library will be useful in many of the following projects of the `Common Core`.

> **Disclaimer**: This code base follows a peculiar coding style, to pass [Norminette](https://github.com/42School/norminette)'s' queer syntactical tests, a requirement for most projects at 42 School.

>> ❗ **Important**: If you happen to be a student at 42, you are encouraged to go through the process of writing these functions and testing them yourself. Feel free to use this repository as a research source, but beware of the `copy paste` monster! Do not use code you only understand partially, it will make later projects much harder to manage! If you passed the piscine you should be able to complete this project successfully. Be thorough, be persistent and be patient with yourself!

[Add Project Subject]

# Usage

## Setup & Compilation 🖇️

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
## Makefile rules 🔧

- To compile `libft` with **mandatory** files: `make`

- To compile `libft` with **bonus** files: `make bonus`

- To compile **mandatory** & **bonus** files: `make all`

- To clean the working directory of **object files** (**.o**): `make clean`

- To clean the working directory of **object files** (**.o**) and **archive** (**.a**) files: `make fclean`

___
## Implementation

This project comprises `43` functions divided into three sections:
- **Mandatory Part 1**, a selection of `23` `libc` functions;
- **Mandatory Part 2**, `11` more non-standard or modified-standard functions;
- plus a **Bonus Part**, a final set of `9` functions helpful for manipulating lists;

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Mandatory Part 1 📝</summary>
<ul>
<details>
	<summary> ✅ ft_isalpha</summary>
	<p>Checks if a given character is a letter of the alphabet (a-z or A-Z);<p>
</details>
<details>
	<summary> ✅ ft_isdigit</summary>
	<p>Checks if a given character is a digit (0-9);</p>
</details>
<details>
	<summary> ✅ ft_isalnum</summary>
	<p>Checks if a character is alphanumeric (a-z, A-Z or 0-9);</p>
</details>
<details>
	<summary> ✅ ft_isascii</summary>
	<p>Checks if a given character is within the ASCII character set (0-127);</p>
</details>
<details>
	<summary> ✅ ft_isprint</summary>
	<p>Checks if a a given character is within the printing ASCII character set (32-126);</p>
</details>
<details>
	<summary> ✅ ft_strlen</summary>
	<p>Calculates the length of a null-terminated string;</p>
</details>
<details>
	<summary> ✅ ft_memset</summary>
	<p>Sets a given block of memory to a specific value/character;</p>
</details>
<details>
	<summary> ✅ ft_bzero</summary>
	<p>Sets a given block of memory to zero;</p>
</details>
<details>
	<summary> ✅ ft_memcpy</summary>
	<p>Copies a specified number of bytes from one memory location to another;</p>
</details>
<details>
	<summary> ✅ ft_memmove</summary>
	<p>Moves/Copies a specified number of bytes from one memory location to another, even when the source and destination regions overlap;</p>
</details>
<details>
	<summary> ✅ ft_strlcpy</summary>
	<p>Copies a string with a given length, ensuring that the destination buffer is not overrun; Returns the total length of 'src';</p>
</details>
<details>
	<summary> ✅ ft_strlcat</summary>
	<p>Appends a null-terminated string 'src' to the end of 'dst', appending at most `size - strlen(dst) - 1` bytes, null-terminating the result; Returns the initial length of 'dst' plus the length of 'src';</p>
</details>
<details>
	<summary> ✅ ft_toupper</summary>
	<p>Converts a given character to uppercase;</p>
</details>
<details>
	<summary> ✅ ft_tolower</summary>
	<p>Converts a given character to lowercase;</p>
</details>
<details>
	<summary> ✅ ft_strchr</summary>
	<p>Searches for the first occurrence of a given character in a string, returning a pointer to its location in memory; If no match is found returns NULL;</p>
</details>
<details>
	<summary> ✅ ft_strrchr</summary>
	<p>Searches for the last occurrence of a given character in a string, returning a pointer to its location in memory; If no match is found returns NULL;</p>
</details>
<details>
	<summary> ✅ ft_strncmp</summary>
	<p>Compares two strings up to a given number of characters, returns '0' if they are equal, or returns the difference between the first two characters that do not match;</p>
</details>
<details>
	<summary> ✅ ft_memchr</summary>
	<p>Searches the initial 'n' bytes within a block of memory for a specific byte value, returning a pointer to its location in memory; If no match is found returns NULL;</p>
</details>
<details>
	<summary> ✅ ft_memcmp</summary>
	<p>Compares two strings up to a given number of bytes, returning '0' if they are equal, or returns the difference between the first two characters that do not match;</p>
</details>
<details>
	<summary> ✅ ft_strnstr</summary>
	<p>Searches 'len' characters for the first occurrence of the null-terminated string 'little' in the string 'big'; If 'little' is empty 'big' is returned, if no match is found returns NULL, otherwise returns a pointer to the first character of the first occurrence of 'little' in 'big';</p>
</details>
<details>
	<summary> ✅ ft_atoi</summary>
	<p>Converts the initial portion of the string pointed to by 'nptr' to int; The string may begin with an arbitrary amount of whitespace (as determined by isspace(3)) followed by a single optional'+' or '-' sign. Returns the converted value or '0' on error;</p>
</details>
<details>
        <summary> ✅ ft_calloc</summary>
	<p>Allocates memory for an array of 'nmemb' elements of 'size' bytes each; Returns a pointer to the allocated memory, or NULL if the allocation fails; The memory is set to zero.</p>
</details>
<details>
	<summary> ✅ ft_strdup</summary>
	<p>Returns a pointer to a new string, a duplicate of the string pointed to by 's', or NULL if the allocation fails; Memory for the string is obtained with 'malloc(3)', and can be freed using 'free(3)';</p>

</details>
</ul>
</details>

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Mandatory Part 2 📝</summary>
	<ul>
	<details>
		<summary> [ ] ft_substr</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_strjoin</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_strtrim</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_split</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_itoa</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_strmapi</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_striteri</summary>
		<p>...</p>
	</details>
	<details>
		<summary> ✅ ft_putchar_fd</summary>
		<p>Outputs the character ’c’ to the given file descriptor;</p>
	</details>
	<details>
		<summary> ✅ ft_putstr_fd</summary>
		<p>Outputs the string 's' to the given file descriptor;<p>
	</details>
	<details>
		<summary> ✅ ft_putendl_fd</summary>
		<p>Outputs the string 's' followed by a newline to the given file descriptor;</p>
	</details>
	<details>
		<summary> [ ] ft_putnbr_fd</summary>
		<p>Outputs the integer 'n' to the given file descriptor;</p>
	</details>
	</ul>
</details>

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Bonus Part 📝</summary>
	<ul>
	<details>
		<summary> [ ] ft_lstnew</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstadd_front</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstsize</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstlast</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstadd_back</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstdelone</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstclear</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstiter</summary>
		<p>...</p>
	</details>
	<details>
		<summary> [ ] ft_lstmap</summary>
		<p>...</p>
	</details>
	</ul>
	</div>
</details>

___

### License

This work is published under the terms of <a href="https://github.com/PedroZappa/libft/blob/master/LICENSE">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>


