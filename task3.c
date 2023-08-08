#include <stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    b = 1 + (1/(a+1));
    return printf("%d", b);
}