#include <stdio.h>

int main()  {
    int a,b;
    scanf("%d%d", &a, &b);
    if (a < b)  {return printf("n/a");}
    int a_1 = a;
    while (a > 0) {
        a = a - b;
    }
    if (a == 0) {
        printf("%d делится без остатка на %d", a_1, b);
    }
    if (a != 0) {
        printf("%d не делится без остатка на %d", a_1, b);
    }
}