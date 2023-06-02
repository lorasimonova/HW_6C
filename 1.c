#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int i;
    for (i = a; i <= b; i++) { //задает цикл от a до b, в котором i увеличивается на 1
        if ((i % d) == c) { //проверяет, равен ли остаток от деления i на d значению c
            printf("%d ", i);
        }
    }

    return 0;
}
