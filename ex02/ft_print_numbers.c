void ft_putchar(char start); { 
	write(1, &c, 1);
}

void ft_print_number(void) {
 char start;
 char end;

 start = ('0');
 end = ('9');
 while (start <= end) 
 {
	 ft_putchar(start);
	 start++;
 }

}

