#ifndef TESTS_H
# define TESTS_H

# include <assert.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <ctype.h>
# include <limits.h>
# include <time.h>

#define COLOR_RED	"\033[0;31m"
#define COLOR_GREEN	"\033[0;32m"
#define COLOR_RESET	"\033[0m"

extern void		ft_bzero(void *s, size_t n);
extern void		ft_cat(int fd);
extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isascii(int c);
extern int		ft_isdigit(int c);
extern int		ft_isprint(int c);
extern void		*ft_memcpy(void *restrict dst, void *restrict src, size_t n);
extern void		*ft_memset(void *b, int c, size_t len);
extern int		ft_puts(const char *s);
extern char		*ft_strcat(char *restrict s1, const char *restrict s2);
extern char		*ft_strdup(const char *s1);
extern size_t	ft_strlen(const char *s);
extern int		ft_tolower(int c);
extern int		ft_toupper(int c);

extern int		ft_isspace(int c);
extern int		ft_islower(int c);
extern int		ft_isupper(int c);
extern int		ft_isblank(int c);
extern int		ft_iscntrl(int c);


void		test_bzero(void);
void		test_cat(void);
void		test_isalnum(void);
void		test_isascii(void);
void		test_isdigit(void);
void		test_isalpha(void);
void		test_isprint(void);
void		test_memcpy(void);
void		test_memset(void);
void		test_puts(void);
void		test_strcat(void);
void		test_strdup(void);
void		test_strlen(void);
void		test_tolower(void);
void		test_toupper(void);

void		test_isspace(void);
void		test_islower(void);
void		test_isupper(void);
void		test_isblank(void);
void		test_iscntrl(void);


void		ft_putnstr_custom(char *str, size_t len, char delim);

#endif
