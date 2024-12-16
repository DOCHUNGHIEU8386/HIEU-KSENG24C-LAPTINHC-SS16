#include <stdio.h>

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu arr[%d] = %d\n", i, *(arr + i));  
    }
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};  
    int size = sizeof(mang) / sizeof(mang[0]);  
        inMang(mang, size);
    
    return 0;
}

