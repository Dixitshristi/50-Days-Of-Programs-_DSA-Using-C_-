#include <stdio.h>

void countOddEven(int arr[], int size) {
    int odd_count = 0, even_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("%d %d\n", odd_count, even_count);
}

int main() {
    int arr1[] = {2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    countOddEven(arr1, size1);  // Output: 2 3

    int arr2[] = {22, 32, 42, 52, 62};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    countOddEven(arr2, size2);  // Output: 0 5

    return 0;
}
