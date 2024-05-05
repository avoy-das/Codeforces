#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    int i;
    int count = 0;
    for (i = 0; i < t; i++) {
        char txt[100];
        scanf("%s", txt);
        if (txt[0] == 'T') {
            count += 4;
        } else if (txt[0] == 'C') {
            count += 6;
        } else if (txt[0] == 'O') {
            count += 8;
        } else if (txt[0] == 'D') {
            count += 12;
        } else if (txt[0] == 'I') {
            count += 20;
        }
    }
    printf("%d\n", count);
    return 0;
}
