# pipex

Chaining unix command with 🇨 using pipes and forks 🍴.

## General

Goal of the project is to run multiple `unix` commands with `execve` by creating child processes with `fork` and communicating between them using `pipe`.

## Usage

Execution needs an infile to open, two unix commands and outfile to truncate the result:

```
./pipex "Makefile" cat 'wc -l' outfile
```

Will be the same as bash syntax:

```
< Makefile cat | wc -l > outfile
```

## Libft

This is the first project featuring `libft` with added `ft_printf` and `gnl`. All `linked list` and additional memory deallocation functions are included.

```c
ft_free_double((void ***)&ppx->cmd);
```

```c
void ft_free_double(void ***arr)
{
  int i;

  if (!arr || !*arr)
    return ;
  i = 0;
  while ((*arr)[i])
  {
    free((*arr)[i]);
    (*arr)[i] = NULL;
    i++;
  }
  free(*arr);
  *arr = NULL;
}
```

Project `passes` many of the 42 `testers`, including [franzinette](https://github.com/xicodomingues/francinette) `strict` excluding quotes and backslashes.

For other information, please refer the main page.

### Cheers and good luck! 🥳