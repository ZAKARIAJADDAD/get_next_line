/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:15:37 by zjaddad           #+#    #+#             */
/*   Updated: 2022/11/14 20:29:15 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>
# include<string.h>
# include<stdio.h>
# include<limits.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t n, size_t size);
void	ft_bzero(void *s, size_t n);

#endif