#include <stdio.h>

int main() {
    int n, a = 0, b = 0, c = 0, d = 0;

    scanf("%d", &n);

    if (n >= 100) {
        a = n / 100;
        n %= 100;
    }

    if (n >= 20) {
        b = n / 20;
        n %= 20;
    }

    if (n >= 10) {
        c = n / 10;
        n %= 10;
    }

    if (n >= 5) {
        d = n / 5;
        n %= 5;
    }



    printf("%d", a + b + c + d +n);

    return 0;
}
