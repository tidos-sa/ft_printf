/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:48:04 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/01/03 20:00:01 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	nn;
	int				count;
	char			c;

	count = 0;
	nn = (unsigned int)n;
	if (nn >= 10)
		count += ft_putnbr_unsigned(nn / 10);
	c = (nn % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
/*
int main(void)
{
    int result;

    result = ft_putnbr_unsigned(1000);
    write(1,"\n",1);
    printf("%i", result);
}
*/
