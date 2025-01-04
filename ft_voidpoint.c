/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidpoint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 20:16:52 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/01/03 21:11:58 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_voidpoint(void *str)
{
	unsigned long		nbr;
	int					count;

	count = 0;
	if (!str)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	nbr = (unsigned long)str;
	count += ft_putstr("0x");
	count += ft_print_hexa(nbr, 0);
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
    int a = 42;
    void *ptr = &a;

    int count = ft_voidpoint(ptr);
    
    printf("\nNúmero de caracteres impressos: %d\n", count);

    return 0;
}
*/
