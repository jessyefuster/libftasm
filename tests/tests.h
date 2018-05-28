#ifndef TESTS_H
# define TESTS_H

# include <assert.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <ctype.h>

extern void		ft_bzero(void *s, size_t n);
extern void		ft_cat(int fd);
extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isascii(int c);
extern int		ft_isdigit(int c);
extern void		*ft_memcpy(void *restrict dst, void *restrict src, size_t n);
extern void		*ft_memset(void *b, int c, size_t len);


void		test_bzero(void);
void		test_cat(void);
void		test_isalnum(void);
void		test_isascii(void);
void		test_isdigit(void);
void		test_isalpha(void);
void		test_memcpy(void);
void		test_memset(void);
void		test_puts(void);
void		test_strcat(void);
void		test_strdup(void);
void		test_strlen(void);
void		test_tolower(void);
void		test_toupper(void);


void		ft_putnstr_custom(char *str, size_t len, char delim);

#endif
