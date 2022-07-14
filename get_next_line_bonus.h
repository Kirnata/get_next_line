/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptopping <ptopping@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:34:01 by ptopping          #+#    #+#             */
/*   Updated: 2021/11/22 18:48:37 by ptopping         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef FD_SIZE
#  define FD_SIZE 100000
# endif

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *str);
char	*ft_record(char *stat_line);
char	*ft_cut_off(char *stat_line);
int		ft_strlen(char *str);
char	*get_next_line(int fd);
int		ft_find_endl(char *tmp);
char	*ft_dop_strjoin(char *s1, char *s2, char *s3);
int		reading(char **stat_line, int fd);
char	*func_while_join(char *s1, char *s2, char *s3);

#endif