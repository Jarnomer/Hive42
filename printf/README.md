# printf

Recreation of legendary printf in 🇨, limited ft_edition.

## General

The goal of the project is to replicate limited functionality of original `printf`.

Project only includes modified `put_fd` functions from `libft` to keep track of written bytes.

Struct is used to manage all results including `-1` return value in case of `error`.

```c
typedef struct s_print
{
	int result;
	int length;
}	t_print;
```

Main function utilizes `va_list` from standard library. Following `specifiers` must be handled.

| **Specifier** | **Description**                                                                 |
|---------------|---------------------------------------------------------------------------------|
| `%c`          | Prints a single character.                                                     |
| `%s`          | Prints a string.                       |
| `%p`          | Prints a pointer in hexadecimal format.                |
| `%d`          | Prints a decimal number.                                             |
| `%i`          | Prints an integer number.                                                  |
| `%u`          | Prints an unsigned decimal number.                                   |
| `%x`          | Prints a hexadecimal number in lowercase.                     |
| `%X`          | Prints a hexadecimal number in uppercase.                     |
| `%%`          | Prints a percent sign.                                                        |

In order to check specifiers and easy up the hexadecimal printing, following macros are included in the header.

```c
# define HEXUPP "0123456789ABCDEF"
# define HEXLOW "0123456789abcdef"
# define SPECS  "cspdiuxX%"
```

As an example, recursive implementation of hexadecimal printing. Same function is used for `%p` specifier.

```c
void format_hex(t_print *output, unsigned long hex, char spec)
{
  if (hex >= 16)
    format_hex(output, hex / 16, spec);
  if (spec == 'p' && hex < 16)
    format_str(output, "0x");
  if (output->length == -1)
    return ;
  if (spec == 'x' || spec == 'p')
    format_chr(output, HEXLOW[hex %= 16]);
  else
    format_chr(output, HEXUPP[hex %= 16]);
}
```

Project `passes` many of the 42 `testers`, including Franzinette `strict`.

For other information, please refer the main page.

### Cheers and good luck! 🥳