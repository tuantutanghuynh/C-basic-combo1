#include <stdio.h> 

int main() {
        long long a,b, tong, hieu, tich;
        printf("Nhap hai so a va b rat lon cach nhau bang khoang trang:");
        scanf("%lld %lld", &a, &b);
        tong=a+b;
        hieu=a-b;
        tich=a*b;
        printf("Tong hai so la: %lld\n", tong);
        printf("Hieu hai so la: %lld\n", hieu);
        printf("Tich hai so la: %lld\n", tich);

    return 0; 
}
