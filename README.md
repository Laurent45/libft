# Libft

A C standard library re-implementation, started as the first project of
the [42](https://42.fr) curriculum and extended over time with
`ft_printf`, `get_next_line` and a few extra utilities.

It provides string manipulation, memory operations, character
classification, linked lists and basic I/O — everything needed to build
later 42 projects without relying on the forbidden parts of libc.

## Structure

The library is organized in modules, each with its own header:

```
srcs/
├── ft_ctype/    Character classification        (ft_ctype.h)
├── ft_mem/      Raw memory operations           (ft_mem.h)
├── ft_string/   String manipulation             (ft_string.h)
├── ft_lst/      Singly linked lists             (ft_lst.h)
└── ft_stdio/    Output, printf, get_next_line   (ft_stdio.h)
    ├── printf/
    └── get_next_line/
```

Every public function is documented in its header file.

## Modules

### ft_ctype — character classification

`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint`

### ft_mem — memory operations

`ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr`
`ft_memcmp` `ft_calloc`

### ft_string — string manipulation

Libc equivalents:
`ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr`
`ft_strcmp` `ft_strncmp` `ft_strnstr` `ft_strdup` `ft_atoi` `ft_atol`
`ft_toupper` `ft_tolower`

Allocation helpers:
`ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_clear_split`
`ft_itoa` `ft_strmapi` `ft_striteri`

### ft_lst — singly linked lists

`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize`
`ft_lstlast` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

### ft_stdio — input / output

File descriptor output:
`ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

`ft_printf` — a printf clone writing to standard output.
Supported conversions: `%c %s %p %d %i %u %x %X %%`
Supported flags: `-` `0` `#` `+` (space), field width and `.` precision.

`get_next_line` — reads a file descriptor line by line, keeping its
own buffer between calls. Handles up to `FD_MAX` (1024) file
descriptors in parallel.

## Build

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds from scratch
```

Compiled with `-Wall -Wextra -Werror`, with automatic header
dependency tracking (`-MMD -MP`). Object files go to `build/`.

## Usage

Link against `libft.a` and include the header(s) of the modules
you need:

```c
#include "ft_string.h"
#include "ft_stdio.h"

int main(void)
{
    char **words;
    int  i;

    words = ft_split("hello world from libft", ' ');
    i = 0;
    while (words[i])
        ft_printf("%d: %s\n", i, words[i++]);
    ft_clear_split(words);
    return (0);
}
```

```sh
gcc main.c -I libft/srcs/ft_string/headers -I libft/srcs/ft_stdio/headers \
    -L libft -lft -o demo
```
