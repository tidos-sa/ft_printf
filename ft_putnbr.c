/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:45:23 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/01/03 19:38:54 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nn;
	int			count;
	char		c;

	count = 0;
	nn = (long int)n;
	if (nn < 0)
	{
		write(1, "-", 1);
		nn = -nn;
		count++;
	}
	if (nn >= 10)
	{
		count += ft_putnbr(nn / 10);
	}
	c = (nn % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
/*
int main(void)
{
    int result;

    result = ft_putnbr(-1000);
    write(1,"\n",1);
    printf("%i", result);
}
*/
