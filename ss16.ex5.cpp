#include <stdio.h>

void capNhatPhanTu(int *arr, int giaTriMoi, int viTri) {
    arr[viTri] = giaTriMoi;  
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};  
    int size = sizeof(mang) / sizeof(mang[0]);  
    
    
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, mang[i]);
    }
    capNhatPhanTu(mang, 100, 2);
    printf("\nMang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, mang[i]);
    }

    return 0;
}

