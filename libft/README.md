# libft

Some of Standard 🇨 Library functions with little bit of spice 🌶️.

## Contents

Here is the table of functions, including bonus.

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

Header is in includes, `-I` compiler is used to allow include `<libft.h>` instead of `"libft.h"`.

Bonuses are located in their own separate `bonus` directory under `sources`.

## General

Passes all of the 42 testers successfully, including Franzinette `strict`.

Build as library 📚 thus each function is using each other when applicable.

For other information, see the main page.