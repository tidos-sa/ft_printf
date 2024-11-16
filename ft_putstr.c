#include <stdio.h>
#include <unistd.h>

int ft_putstr(char *s)
{
    int len;
    len = 0;

    if (s == NULL)
    {
        return write(1, "(null)", 6);
    }

    while (s[len])
	{
        write(1,&s[len],1);
        len++;
    }
    return len;
}
/*
int main()
{
    int result = ft_putstr("asudausdashduasduassudhaushd");
    printf("%i",result);
}
*/