#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_all - a function prints all arguments
* @format: the format
* Return: void
*/
void print_all(const char * const format, ...) {
    va_list args;
    const char *ptr = format;
    va_start(args, format);
    char c;
    int i;
    float f;
    char *s;

    while (*ptr) {
        if (*ptr == 'c') {
            c = va_arg(args, int);
            printf("%c", c);
        } else if (*ptr == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (*ptr == 'f') {
            f = va_arg(args, double);  // floats are promoted to double in varargs
            printf("%f", f);
        } else if (*ptr == 's') {
            s = va_arg(args, char *);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
        }
        ptr++;
    }

    va_end(args);
    printf("\n");
}
