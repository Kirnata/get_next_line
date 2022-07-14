/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptopping <ptopping@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:44:03 by ptopping          #+#    #+#             */
/*   Updated: 2021/11/22 18:58:10 by ptopping         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{	
	char	*s3;

	if (!s1)
		return (ft_strdup(s2));
	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	s3 = func_while_join(s1, s2, s3);
	return (s3);
}

char	*func_while_join(char *s1, char *s2, char *s3)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		s3[i++] = *s2;
		++s2;
	}
	s3[i] = '\0';
	free(s1);
	return (s3);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*str2;

	str2 = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (str2 == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char	*ft_record(char *stat_line)
{
	char	*line;
	int		i;

	i = 0;
	if (!stat_line || !*stat_line)
		return (NULL);
	while (stat_line[i] != '\n' && stat_line[i])
		i++;
	i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
	{
		free(stat_line);
		return (NULL);
	}
	line[i] = '\0';
	i--;
	while (i >= 0)
	{
		line[i] = stat_line[i];
		i--;
	}
	return (line);
}

char	*ft_cut_off(char *stat_line)
{
	int		i;
	char	*new;

	i = 0;
	while (stat_line[i] != '\n' && stat_line[i])
		i++;
	if (stat_line[i])
		++i;
	new = ft_strdup(stat_line + i);
	if (!new)
	{
		free(stat_line);
		return (NULL);
	}
	free(stat_line);
	return (new);
}
