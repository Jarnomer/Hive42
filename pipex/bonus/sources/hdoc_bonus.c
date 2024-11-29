/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdoc_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmertane <jmertane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:18:07 by jmertane          #+#    #+#             */
/*   Updated: 2024/02/10 23:59:54 by jmertane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

static void	finish_heredoc(t_pipex *ppx, char** eof)
{
	get_next_line(-1);
	ft_free_single((void **)eof);
	ft_free_single((void **)&ppx->temp);
	close(ppx->pipe[WR_END]);
	close(ppx->pipe[RD_END]);
}

static void	prepare_heredoc(t_pipex *ppx, char** eof, int *len)
{
	if (pipe(ppx->pipe) == -1)
		error_occured(ERR_PIPE, MSG_PIPE, ppx);
	*eof = ft_strjoin(ppx->argv[2], "\n");
	if (!eof || !*eof)
		error_occured(ERR_MEM, MSG_MEM, ppx);
	*len = ft_strlen(*eof);
	ft_putchar_fd('>', STDOUT_FILENO);
}

void	read_heredoc(t_pipex *ppx)
{
	char	*eof;
	int		len;

	prepare_heredoc(ppx, &eof, &len);
	while (true)
	{
		ppx->temp = get_next_line(STDIN_FILENO);
		if (!ppx->temp)
			break ;
		if (!ft_strncmp(ppx->temp, eof, len))
			break ;
		ft_putstr_fd(ppx->temp, ppx->pipe[WR_END]);
		free(ppx->temp);
	}
	ppx->infile = dup(ppx->pipe[RD_END]);
	finish_heredoc(ppx, &eof);
}
