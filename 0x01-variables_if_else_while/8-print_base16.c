#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print with printf function
 * Return: Always 0
*/
int main() {
    int i;
    for (i = 0; i < 16; i++) {
        if (i < 10) {
            putchar("%d", i);
        } else {
            putchar("%c", 'a' + i - 10);
        }
    }
    putchar("\n");
    return 0;
}
