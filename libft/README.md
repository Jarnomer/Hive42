# libft

Some of the Standard 🇨 Library functions with added sprinkle of spice 🌶️.

## General

`Libft` is focused on creating personal function library in C.

The library inludes a selection of replicated `Libc` functions aimed to be used in following 42 projects.

It is completed with `additional`, mainly string focused functions. `Bonus` is centered around `linked list`.

Project `passes` many of the 42 `testers` successfully, including Franzinette `strict`.

Build as a library and thus each function is relying on each other when applicable.

For other information, please refer the main page.

## Contents

Here is the table of all functions, including bonus.

| **Libc**              | **Additional**        | **Bonus**               |
|------------------------|-----------------------|--------------------------|
| `ft_atoi`           | `ft_itoa`          | `ft_lstadd_back`|
| `ft_bzero`          | `ft_putchar_fd`    | `ft_lstadd_front`|
| `ft_calloc`         | `ft_putendl_fd`    | `ft_lstclear`   |
| `ft_isalnum`        | `ft_putnbr_fd`     | `ft_lstdelone`  |
| `ft_isalpha`        | `ft_putstr_fd`     | `ft_lstiter`    |
| `ft_isascii`        | `ft_split`         | `ft_lstlast`    |
| `ft_isdigit`        | `ft_strdup`        | `ft_lstmap`     |
| `ft_isprint`        | `ft_striteri`      | `ft_lstnew`     |
| `ft_memchr`         | `ft_strjoin`       | `ft_lstsize`    |
| `ft_memcmp`         | `ft_strmapi`       |                          |
| `ft_memcpy`         | `ft_strtrim`       |                          |
| `ft_memmove`        | `ft_substr`        |                          |
| `ft_memset`         |                       |                          |
| `ft_strchr`         |                       |                          |
| `ft_strlcat`        |                       |                          |
| `ft_strlcpy`        |                       |                          |
| `ft_strlen`         |                       |                          |
| `ft_strncmp`        |                       |                          |
| `ft_strnstr`        |                       |                          |
| `ft_strrchr`        |                       |                          |
| `ft_tolower`        |                       |                          |
| `ft_toupper`        |                       |                          |

Mandatory part combines Libc and additional functions, these are located in `sources` folder.

Header is in includes, `-I` is used in `Makefile` to allow include `<libft.h>` instead of `"libft.h"`.

Bonuses are located in their own `bonus` directory under `sources` and they use `shared` header file.

### Cheers and good luck! 🥳