/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrudakev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:47:19 by yrudakev          #+#    #+#             */
/*   Updated: 2018/11/29 13:47:30 by yrudakev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 1
# define READING_FAIL -1
# define I_AM_READING 1
# define READING_FINISHED 0

int		get_next_line(const int fd, char **line);

#endif
