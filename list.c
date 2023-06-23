#include <stdio.h>

void print_reverse(char string[], int n) {
    if (n == 0) {
        return;
    }

    printf("%c", string[n-1]);
    return print_reverse(string, n-1);
}

int main() {

    print_reverse("hello", 5);

    return 0;
}