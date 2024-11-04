#include "ft_printf.h"

int	ft_voidpoint(void *str)
{
    int count;
    count = 0;
    unsigned long long nbr;

    nbr = (unsigned long long)str;
    if(!str)
    {
        count += ft_putstr("(nil)");
        return (count);
    }
    count += ft_putstr("0x");
    count += print_hexa(nbr, 1);
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

