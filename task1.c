#include <stdio.h>
int inputarray(int array, int n);

int main() {
    int n; // matrix size
    scanf("%d", &n);
    int array;
    inputarray(array, n);
    int m = 0;
    int result = 0;
    for (n; n > 0; n--){
        result = result + array[m][n];
        m++;
    }
    return printf("%d", result);
}

int inputarray(int array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scnaf("%d", array[i][j]);
        }
    }
return array;
}
