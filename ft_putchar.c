int ft_putchar_fd(char c) {
    write(1, &c, 1);
    return 1;
}