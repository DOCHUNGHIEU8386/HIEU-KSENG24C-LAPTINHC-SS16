#include <stdio.h>

void tinhTong(int *a, int *b, int *result) {
    *result = *a + *b;  
}

int main() {
    int x = 5, y = 7, ketQua;
    tinhTong(&x, &y, &ketQua);
    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);
    
    return 0;
}

