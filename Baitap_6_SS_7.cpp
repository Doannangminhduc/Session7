#include <stdio.h>

int main() {
    int arr[5] = {11, 23, 3, 1, 5};

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }

    printf("Mang sau khi thay doi: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

