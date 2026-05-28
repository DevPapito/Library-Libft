/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:58:07 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 19:13:32 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar_fd(char c, int fd); // 42 function unistd.h
void	ft_putstr_fd(char *s, int fd); // 42 functions unistd.h
void	ft_putendl_fd(char *s, int fd); // 42 functions unistd.h
void	ft_putnbr_fd(int nb, int fd); // 42 functions unistd.h

int		ft_isalpha(int c); // Ctype functions
int		ft_isdigit(int c); // Ctype functions
int		ft_isalnum(int c); // Ctype functions
int		ft_isprint(int c); // Ctype functions
int		ft_tolower(int c); // Ctype functions
int		ft_toupper(int c); // Ctype functions
int		ft_isascii(int c); // Ctype functions POXIS

int		ft_atoi(const char *nptr); // Stdlib
void	*ft_calloc(size_t nmemb, size_t size); // Stdlib

void	*ft_memset(void *s, int c, size_t n); // String.h low
void	*ft_memcpy(void *dest, const void *src, size_t n); // String.h low
void	*ft_memmove(void *dest, const void *src, size_t n); // String.h low
void	*ft_memchr(const void *s, int c, size_t n); // String.h low
int		ft_memcmp(const void *s1, const void *s2, size_t n); // String.h low

size_t	ft_strlen(const char *s); // String.h high
int		ft_strncmp(const char *s1, const char *s2, size_t n); // String.h high
#endif
