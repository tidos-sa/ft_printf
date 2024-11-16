#include "ft_printf.h"

int print_hexa(unsigned long long nb, int uppercase)
{
    char *charset;
    int count;
    count = 0;

    if(uppercase)
        charset = "0123456789ABCDEF";
    else
        charset = "0123456789abcdef";
    if (nb >= 16)
        count += print_hexa(nb / 16, uppercase);
    count += ft_putchar_fd(charset[nb % 16]);

    return (count);
}
/*
#include <stdio.h>
int main(void)
{
    char *str;
    unsigned long long nb;

    nb = (unsigned long long)str;
    int count = print_hexa(nb,1);
    
    printf("\nNúmero de caracteres impressos: %d\n", count);

    return 0;
}

*/