/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 11:01:07 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/28 22:52:22 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1048

void	ft_putstr(int fd, char *str)
{
	while (*str != '\0')
		write(fd, str++, 1);
}

void	ft_printerror(char *prog, char *arg, char *str)
{
	ft_putstr(2, prog);
	ft_putstr(2, ": ");
	ft_putstr(2, arg);
	ft_putstr(2, ": ");
	ft_putstr(2, str);
	write(2, "\n", 1);
}

void	error_msg(char *prog, char *arg, int err)
{
	if (err == ENOENT)
		ft_printerror(prog, arg, "No such file or directory");
	else if (err == EISDIR)
		ft_printerror(prog, arg, "Is a directory");
	else if (err == EACCES)
		ft_printerror(prog, arg, "Permission denied");
	else if (err == EAGAIN)
		ft_printerror(prog, arg, "Resource temporarily unavailable");
}

void	display_files(int argc, char **argv)
{
	char	buffer[BUF_SIZE];
	int		fd;
	int		i;
	int		ret;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd < 0)
			error_msg(argv[0], argv[i], errno);
		else
			while ((ret = read(fd, buffer, BUF_SIZE)))
				write(1, buffer, ret);
		if (close(fd) == -1)
			error_msg(argv[0], argv[i], errno);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		ret;
	char	buffer[BUF_SIZE];

	if (argc < 2 || argv[1][0] == '-')
		while ((ret = read(0, buffer, BUF_SIZE)))
			write(1, buffer, ret);
	else
		display_files(argc, argv);
	return (0);
}
