#include <stdio.h>

int main(){
    int gia, sl, tong;
    printf("Nhap gia san pham: ");
    scanf("%d", &gia);
    printf("Nhap so luong: ");
    scanf("%d", &sl);
    tong = gia * sl;
    printf("Tong gia tri don hang: %d\n", tong);

    float phantram, giamgia;
    printf("Nhap phan tram giam gia: ");
    scanf("%f", &phantram);
    giamgia = tong * (phantram / 100);
    printf("Gia tri giam gia: %.2f", giamgia);
    printf("Tong gia tri don hang sau khi giam gia: %.2f", tong - giamgia);
return 0;
}
