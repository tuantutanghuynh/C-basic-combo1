#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    float chieucao;
    
    printf("Nhap chieu cao tinh bang m:");
    scanf("%f", &chieucao);
    int chieucao_cm = chieucao*10;

    printf("Chieu cao sau khi doi ra cm la: %d cm\n", chieucao_cm);
    return 0;
}
