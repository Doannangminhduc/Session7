#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n Do dai cua mang: %d \n", length);

    return 0;
}

