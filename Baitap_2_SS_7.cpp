#include <stdio.h>

int main() {
    int arr[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Nhap phan tu arr [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap là: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

