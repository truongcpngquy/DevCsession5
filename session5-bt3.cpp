#include<stdio.h> 

int main() {
    int n, tong = 0;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    
    
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong cac so la: %d\n", tong);

    return 0;
}
