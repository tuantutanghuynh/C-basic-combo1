#include <stdio.h>
#include <stdlib.h>

int main(){
      

        float PI=3.1416;
        float r, dientich;

        printf("Nhap ban kinh hinh tron: ");
        scanf("%f", &r);

        if(r<=0){
                printf("Ban kinh khong hop le");
        } else {
                dientich=PI*r*r;
                printf("Dien tich hinh tron la: %.2f", dientich);
        }
        return 0;


}
