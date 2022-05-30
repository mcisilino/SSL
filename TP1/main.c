#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // TP1 - MICAELA CISILINO

    int c=getchar();

    while (c!=EOF) {
        if (islower(c)) {
            c=toupper(c);
            putchar(c);
        }
        else if (isupper(c)) {
            c=tolower(c);
            putchar(c);
        }
        else if(!isdigit(c)) {
            putchar(c);
        }
        c=getchar();
    }
}
