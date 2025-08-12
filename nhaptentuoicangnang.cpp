#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    char ten[30];
    int tuoi;
    float canNang;

    printf("Nhap ten: ");
    scanf("%s", ten);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap cang nang: ");
    scanf("%f", &canNang);

    printf("Toi la %s, %d tuoi, nang %.1f kg \n",ten,tuoi,canNang);
    return 0;
}
