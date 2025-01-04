/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 20:00:39 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/01/03 20:16:41 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
/*
int main()
{
    int result = ft_putstr("asudausdashduasduassudhaushd");
    printf("%i",result);
}
*/
