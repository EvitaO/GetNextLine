/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eovertoo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/10 15:12:25 by eovertoo      #+#    #+#                 */
/*   Updated: 2019/06/02 12:44:59 by eovertoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 9999

# include "libft/includes/libft.h"

int			get_next_line(const int fd, char **line);

#endif
