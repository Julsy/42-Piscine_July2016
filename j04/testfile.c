#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);

/* int main() {
	ft_print_alphabet();
	return 0;
}*/

int main(){
	ft_print_reverse_alphabet();
}

