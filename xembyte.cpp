#include <stdio.h> // Thư viện nhập/xuất chuẩn

int main() {
    // Mục tiêu: In kích thước (số byte) của các kiểu dữ liệu cơ bản

    // sizeof() trả về kiểu size_t (số nguyên không dấu)
    // Nên dùng định dạng %zu khi in để tránh cảnh báo hoặc lỗi

    printf("Chuong trinh hien thi kich thuoc cac kieu du lieu co ban\n\n");

    printf("Size of char   : %zu byte(s)\n", sizeof(char));    // char luôn 1 byte
    printf("Size of int    : %zu byte(s)\n", sizeof(int));     // int thường 4 byte
    printf("Size of float  : %zu byte(s)\n", sizeof(float));   // float thường 4 byte
    printf("Size of double : %zu byte(s)\n", sizeof(double));  // double thường 8 byte

    // In thêm một số kiểu dữ liệu khác để so sánh
    printf("Size of short  : %zu byte(s)\n", sizeof(short));   // short thường 2 byte
    printf("Size of long   : %zu byte(s)\n", sizeof(long));    // long có thể 4 hoặc 8 byte
    printf("Size of long long : %zu byte(s)\n", sizeof(long long)); // long long thường 8 byte

    return 0; // Kết thúc chương trình
}
