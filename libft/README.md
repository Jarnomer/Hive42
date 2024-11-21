# libft

Some of Standard 🇨 Library functions with little bit of spice 🌶️.

## TOC

* [Contents](#Contents)
* [General](#General)


### Contents

Here is the table of functions, including bonus.

| **Libc**              | **Additional**        | **Bonus**               |
|------------------------|-----------------------|--------------------------|
| `ft_atoi.c`           | `ft_itoa.c`          | `ft_lstadd_back_bonus.c`|
| `ft_bzero.c`          | `ft_putchar_fd.c`    | `ft_lstadd_front_bonus.c`|
| `ft_calloc.c`         | `ft_putendl_fd.c`    | `ft_lstclear_bonus.c`   |
| `ft_isalnum.c`        | `ft_putnbr_fd.c`     | `ft_lstdelone_bonus.c`  |
| `ft_isalpha.c`        | `ft_putstr_fd.c`     | `ft_lstiter_bonus.c`    |
| `ft_isascii.c`        | `ft_split.c`         | `ft_lstlast_bonus.c`    |
| `ft_isdigit.c`        | `ft_strdup.c`        | `ft_lstmap_bonus.c`     |
| `ft_isprint.c`        | `ft_striteri.c`      | `ft_lstnew_bonus.c`     |
| `ft_memchr.c`         | `ft_strjoin.c`       | `ft_lstsize_bonus.c`    |
| `ft_memcmp.c`         | `ft_strmapi.c`       |                          |
| `ft_memcpy.c`         | `ft_strtrim.c`       |                          |
| `ft_memmove.c`        | `ft_substr.c`        |                          |
| `ft_memset.c`         |                       |                          |
| `ft_strchr.c`         |                       |                          |
| `ft_strlcat.c`        |                       |                          |
| `ft_strlcpy.c`        |                       |                          |
| `ft_strlen.c`         |                       |                          |
| `ft_strncmp.c`        |                       |                          |
| `ft_strnstr.c`        |                       |                          |
| `ft_strrchr.c`        |                       |                          |
| `ft_tolower.c`        |                       |                          |
| `ft_toupper.c`        |                       |                          |

### General

Written fully according the norm and passes all the 42 testers successfully.

Mandatory part is combination of Libc and additional functions, these are located in sources folder.

Header is in includes, `-I` compiler is used to allow include `<libft.h>` instead of `"libft.h"`.

Bonuses are located in their own separate directory under sources. Here is the table of functions.