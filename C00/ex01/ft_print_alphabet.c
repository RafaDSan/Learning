#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

int main (void)
{
  ft_print_alphabet();
  return(0);
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_print_alphabet(void)
{
  char alphabet;

  alphabet = 97;
  
  while(alphabet <= 122)
  {
    ft_putchar(alphabet); 
    alphabet ++;
  }
}
