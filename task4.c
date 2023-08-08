#include <stdio.h>

int main() {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {111, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int arrres[20] = {};
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < 20; i++) {
        if (index1 < 10 && (index2 >= 10 || arr1[index1] <= arr2[index2])) {
            arrres[i] = arr1[index1];
            index1++;
        } else if (index2 < 10) {
            arrres[i] = arr2[index2];
            index2++;
        }
        // for (int j = i; j > 0 && arrres[j] < arrres[j - 1]; j--) {
        //     int temp = arrres[j];
        //     arrres[j] = arrres[j - 1];
        //     arrres[j - 1] = temp;
        // }
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", arrres[i]);
    }

    return 0;
}
