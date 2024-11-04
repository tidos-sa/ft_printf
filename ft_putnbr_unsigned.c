#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n) {
    char c;
    unsigned int nn;
    int count;

    count = 0;

    nn = (unsigned int)n;

    if (nn >= 10) {
        count += ft_putnbr_unsigned(nn / 10);
    }

    c = (nn % 10) + '0';
    write(1, &c, 1);
    count++;
    return count;
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