#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    long long s,h,m,sec;
    printf("Nhap so giay: ");
    scanf("%lld", &s);

    h=s/3600;
    long long r=s %3600;
    m=r/60;
    sec=r%60;

    double realHour=s/3600.0;

    printf("%lld gio %lld phut %lld giay | %.2f gio\n", h,m,sec,realHour);
}
