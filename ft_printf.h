/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:28:35 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/01/03 18:29:21 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_voidpoint(void *str);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_print_hexa(unsigned long long nb, int uppercase);
//void	**ft_split(char const *s, char c);

#endif
