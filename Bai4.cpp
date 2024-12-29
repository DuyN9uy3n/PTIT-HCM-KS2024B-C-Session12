#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int array[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int maxValue = findMax(array, size);
    printf("So lon nhat trong mang la: %d\n", maxValue);

    return 0;
}
