#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * 
 * Description: prints all possible combinations of two two-digit numbers.
 * 
 * Return: 0
 */

int main(void) {
    int ft,fo, st, so;

    for (ft=48; ft < 58; ft++){
        for(fo=ft; fo < 58; fo++) {
            for (st=ft; st < 58; st++){
                for (so=48; so < 58; so++) {
                    putchar(ft);
                    putchar(fo);
                    putchar(32);
                    putchar(st);
                    putchar(so);
                    if (st == 57 && so == 57)
                        continue;
                    else {
                        putchar(44);
                        putchar(32);
                    }
                    
                }
            }
        }
    }
    putchar('\n');
}