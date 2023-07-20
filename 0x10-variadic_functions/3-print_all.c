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
  int i = 0;
  while (format[i] != '\0') {
    switch (format[i]) {
      case 'c': {
        int arg = va_arg(args, int);
        if (arg == '\0') {
          printf("(nil)");
        } else {
          printf("%c", arg);
        }
        break;
      }
      case 'i': {
        int arg = va_arg(args, int);
        printf("%d", arg);
        break;
      }
      case 'f': {
        float arg = va_arg(args, float);
        printf("%f", arg);
        break;
      }
      case 's': {
        char *arg = va_arg(args, char *);
        if (arg == NULL) {
          printf("(nil)");
        } else {
          printf("%s", arg);
        }
        break;
      }
      default: {
        // Ignore any other characters.
        break;
      }
    }
    i++;
  }

  printf("\n");
}

