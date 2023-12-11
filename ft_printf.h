/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:28:10 by akaratas          #+#    #+#             */
/*   Updated: 2023/12/10 20:42:50 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

size_t	ft_strlen(const char *s);
char	*ft_itoa_signed(long num, char *base);
char	*ft_itoa_unsigned(unsigned long num, char *base);

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_signed(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_hexadress(unsigned long n);
int		ft_puthex(unsigned int n, char c);

#endif
