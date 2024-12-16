#include <stdio.h>

int timKiem(int *arr, int size, int giaTriCanTim) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == giaTriCanTim) {  
            return i;  
        }
    }
    return -1;  
}

int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};  
    int size = sizeof(mang) / sizeof(mang[0]);  
    int giaTriCanTim = 7;  
    int viTri = timKiem(mang, size, giaTriCanTim);
    
    if (viTri != -1) {
        printf("Phan tu %d tim thay tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", giaTriCanTim);
    }
    
    return 0;
}

