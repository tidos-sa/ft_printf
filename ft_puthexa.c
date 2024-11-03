#include "ft_printf.h"

static int print_hexa(unsigned long long nb, int uppercase)
{
    char *charset;
    int count;

    if(uppercase)
        charset = "0123456789ABCDEF";
    else
        charset = "0123456789abcdef";
    
    if (nb >= 16)
        count += print_hexa(nb / 16, uppercase);
    count += ft_putchar_fd(charset[nb % 16]);

    return (count);
}

int	ft_voidpoint(void *str)
{
    int count;
    unsigned long long nbr;

    nbr = (unsigned long long)str;
    if(!str)
    {
        count += ft_putstr("(nil)");
        return (count);
    }
    count += ft_putstr("0x");
    count += print_hexa(nbr, 0);
    return (count);
}

int main (void)
{
    return (print_hexa(25git5, 0));
}