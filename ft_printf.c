/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:06:52 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/01/03 18:06:57 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	verfication(const char *s, va_list list)
{
	int	count;

	count = 0;
	if (*s == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (*s == 'c')
		count += ft_putchar((char)va_arg(list, int));
	else if (*s == 'd' || *s == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (*s == 'X')
		count += ft_print_hexa(va_arg(list, unsigned int), 1);
	else if (*s == 'x')
		count += ft_print_hexa(va_arg(list, unsigned int), 0);
	else if (*s == 'u')
		count += ft_putnbr_unsigned(va_arg(list, unsigned int));
	else if (*s == 'p')
		count += ft_voidpoint(va_arg(list, void *));
	else if (*s == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		count;

	if (!s)
		return (-1);
	count = 0;
	va_start(list, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += verfication(s, list);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(list);
	return (count);
}
