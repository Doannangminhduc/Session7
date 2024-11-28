#include <stdio.h>

int main() {
    int hai;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &hai);

    int arr[hai];

    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < hai; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la: ");
    for(int i = 0; i < hai; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n ");

    return 0;
}

