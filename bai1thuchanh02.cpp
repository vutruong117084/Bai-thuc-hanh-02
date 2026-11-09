#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    float *a;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    a = (float*)malloc(n * sizeof(float));
    if (a == NULL) {
        printf("Khong du bo nho!");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", a + i);
    }
    printf("\nMang vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(a + i));
    }
    free(a);
    return 0;
}
