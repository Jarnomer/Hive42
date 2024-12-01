# push_swap

Sort numbers using two stacks and turkey sort.

## General

Goal of the project is to run multiple `unix` commands with `execve` by creating child processes with `fork` and communicating between them using `pipe`.

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
