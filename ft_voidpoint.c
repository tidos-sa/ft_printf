#include "ft_printf.h"

int	ft_voidpoint(void *str)
{
    int count;
    unsigned long nbr;

    count = 0;
    if (!str)
    {
        count += ft_putstr("(nil)");
        return (count);
    }
    nbr = (unsigned long)str;
    count += ft_putstr("0x");
    count += ft_print_hexa(nbr, 0); // Use letras minúsculas para o hexadecimal
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

