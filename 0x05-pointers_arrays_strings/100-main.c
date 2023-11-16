#include <stdio.h>
#include <stdbool.h>

int _atoi(const char *str);

int main(void) {
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);

    return 0;
}

int _atoi(const char *str) {
    int result = 0;
    int sign = 1;
    bool digit_found = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (digit_found) {
                break; // Stop if spaces appear after digits
            }
            continue; // Ignore leading spaces
        } else if (str[i] == '-') {
            sign = -1;
        } else if (str[i] == '+') {
            // Allow for explicit positive sign, but do nothing
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit_found = true;
            result = result * 10 + (str[i] - '0');
        } else {
            // Stop at the first non-digit character
            break;
        }
    }

    return result * sign;
}
