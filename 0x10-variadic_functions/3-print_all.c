#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	int i;
    char *s;
    char current_format;
    va_list args;
    va_start(args, format);

i = 0;
    while (format && format[i])
    {
        current_format = format[i];
        switch (current_format)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                {
                    printf("(nil)");
                }
                else
                {
                    printf("%s", s);
                }
                break;
            default:
                break;
        }

        if (format[i + 1] != '\0' && (current_format == 'c' || current_format == 'i' || current_format == 'f' || current_format == 's'))
        {
            printf(", ");
        }

        i++;
    }

    printf("\n");
    va_end(args);
}

