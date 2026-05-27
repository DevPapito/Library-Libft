/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:58:07 by pezio             #+#    #+#             */
/*   Updated: 2026/05/26 21:36:58 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

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
#endif
