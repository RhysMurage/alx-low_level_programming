#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * 
 * Description: prints all possible combinations of two two-digit numbers.
 * 
 * Return: 0
 */

int main() {
    int ft,fo, st, so;

    for (ft=48; ft < 58; ft++){
        for(fo=48; fo < 58; fo++) {
            for (st=48; st < 58; st++){
                for (so=fo; so < 58; so++) {
                    if (ft==st && fo==so)
                        continue;
                    else {
                        putchar(ft);
                        putchar(fo);
                        putchar(32);
                        putchar(st);
                        putchar(so);
                        if (fo==57 && fo==56 && st == 57 && so == 57)
                            continue;
                        else {
                            putchar(44);
                            putchar(32);
                        }
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
}