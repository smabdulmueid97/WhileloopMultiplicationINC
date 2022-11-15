#include <stdio.h>
int main() {
    int i, n;
    printf("Please enter multiplication table : ");
    scanf("%d", &n);
    printf("%d Times Table\n",n);
    i = 1;
    while (i <= 12) {
        printf("%d * %d = %d \n", i, n, i * n);
        ++i;
    }
}