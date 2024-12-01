# push_swap

Sort numbers using two stacks and turkey sort.

## General

Goal of the project is to sort numbers in stack using the least amounts of commands.

You have `two` stacks available, stack `a` and `b`. Numbers are initially stored in stack `a`.

Project uses `turkey sort` where each number targets their `closest` `smallest` or `largest` number before `push` command. Doing so arranges numbers into stack `b` in `decending` order and pushing them back to stack `a` reverses it to `ascending` order.

Stacks are build as `doubly linked lists` 

## Bonus



## Commands

Only following `11 commands` are allowed by sorting algorithm. Each time command is triggered, run the operation and print it to standard out.

| Command | Description                                                      |
|---------|-----------------------------------------------------------------------------|
| sa      | Swap the first 2 elements at the top of stack a. |
| sb      | Swap the first 2 elements at the top of stack b. |
| ss      | Perform `sa` and `sb` at the same time.          |
| pa      | Push first element of stack b as first element to stack a. |
| pb      | Push first element of stack a as first element to stack b. |
| ra      | Shift up all elements of stack a by 1, first becomes last. |
| rb      | Shift up all elements of stack b by 1, first becomes last. |
| rr      | Perform `ra` and `rb` at the same time.          |
| rra     | Shift down all elements of stack a by 1, last becomes first. |
| rrb     | Shift down all elements of stack b by 1, last becomes first. |
| rrr     | Perform `rra` and `rrb` at the same time.        |

```c
void	rra(t_stack **a, bool checker)
{
	reverse(a);
	if (!checker)
		ft_printf("rra\n");
}
```

```c
static void reverse(t_stack **s)
{
  t_stack  *bottom;

  if (!s || !*s || !(*s)->next)
    return ;
  bottom = (t_stack *)ft_lstlast((t_list *)*s);
  bottom->prev->next = NULL;
  bottom->next = *s;
  bottom->prev = NULL;
  *s = bottom;
  bottom->next->prev = bottom;
}
```

## Resources

Project `passes` many of the 42 `testers`, including [franzinette](https://github.com/xicodomingues/francinette) `strict` excluding quotes and backslashes.

For other information, please refer the main page.

### Cheers and good luck! 🥳