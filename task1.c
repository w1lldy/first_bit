#include <stdio.h>

void inputarray(int array[][1000], int n);

int main() {
    int n; // matrix size
    scanf("%d", &n);
    int array[1000][1000];
    inputarray(array, n);
    int m = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {           // для нахождения суммы использует 1 цикл
        result += array[i][n - 1 - m];
        m++;
    }
    return printf("%d", result);
}

void inputarray(int array[][1000], int n) { // ввод чисел без использования  цикла невозможно
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
}
