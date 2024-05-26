/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleong <rleong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:40:29 by rleong            #+#    #+#             */
/*   Updated: 2024/05/26 18:53:09 by rleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_isupper(int c);
int	ft_memchr(const void *s, int c, size_t n);
int	ft_memset(void *s, int c, size_t n);
int	ft_strchr(const char *s, int c);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
