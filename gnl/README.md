# gnl

Read file descriptors with 🇨, one line at the time 📖.

## General

`gnl` is meant to read file descriptor line by line and is meant to be integrated eventually into `libft`.

This project is completed using `linked list` where nodes include read content and address to next node.

```c
typedef struct s_gnl
{
	char			*content;
	struct s_gnl	*next;
}	t_gnl;
```

BUFFER_SIZE defines how many characters are read each time.

```c
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
```

In `bonus`, multiple file descriptors must be supported which introduces some minor edits to `gnl` functions.

Project `passes` many of the 42 `testers`, including Franzinette `strict`, although timeout has to be modified.

For other information, please refer the main page.