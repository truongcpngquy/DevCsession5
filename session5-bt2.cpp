#include <stdio.h>

int main() {
    int n=9, num;

    do {
        printf("Nhap vao mot so: ");
        scanf("%d", &num);
    } while (num != n);
    
    return 0;
}
