/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:36:22 by ibertran          #+#    #+#             */
/*   Updated: 2023/12/31 01:03:07 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* includes *******************************************************************/

# include <unistd.h>	// write()
# include <stdlib.h>	// malloc(), free() ...
# include <limits.h>	// INT_MIN, INT_MAX ...

# include "get_next_line.h"

/* defines ********************************************************************/

# define DEL 127
# define CAPITALIZE 32

/* functions ******************************************************************/

char	**ft_split(char const *s, char c);
char	*ft_itoa_base(int nbr, char *base);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_ischarset(const char c, const char *set);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_itoalen(int n);
int		ft_itoalen_base(int n, char *base);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen_protected(const char *str);
size_t	ft_strlen(const char *s);
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putendl_fd(char *str, int fd);
ssize_t	ft_putnbrbase_fd(int n, char *base, int fd);
ssize_t	ft_putstr_fd(char *str, int fd);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strnlen(const char *str, size_t n);
int		ft_ulltoalen_base(unsigned long long nbr, char *base);
char	*ft_ulltoa_base(unsigned long long nbr, char *base);
int		ft_uitoalen_base(unsigned int n, char *base);
char	*ft_uitoa_base(unsigned int nbr, char *base);
int		ft_strcmp(const char *str1, const char *str2);

#endif