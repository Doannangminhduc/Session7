#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 4, 1, 0};
    int number = 0;

    printf("Cac so chan trong mang: ");
    for(int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            number = 1;
        }
    }

    if (!number) {
        printf("Mang khong chua so chan");
    }

    printf("\n");

    return 0;
}

