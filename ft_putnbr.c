#include <stdio.h>
#include <unistd.h>

int ft_putnbr(int n) {
    char c;
    long int nn;
    int count;

    count = 0;

    nn = (long int)n;

    if (nn < 0) {
        write(1, "-",1);
        nn = -nn;
    }

    if (nn >= 10) {
        ft_putnbr(nn / 10);
        count++;
    }

    c = (nn % 10) + '0';
    write(1,&c,1);
    return count;
}


int main(void)
{
    int result;

    result = ft_putnbr(1000);
    write(1,"\n",1);
    printf("%i", result);
}