include "main.h"

/**
 * print_alphabet_x10 - print all alphabet x10 times in a roll
 *
 * Return: return void
 */

void print_alphabet_x10(void);

{
char alphabet;
int i;
while (i < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
i++;
}

}
