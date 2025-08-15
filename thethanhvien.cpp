#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    system("cls");
    char c;
    printf("Nhap vao ky tu loai the cua ban (V/M/N):");
    scanf("%c", &c);
    char ch = toupper((unsigned char)c);
    int code;

    switch(ch){
        case 'V': code =3; break;
        case 'M': code =2; break;
        case 'N': code =1; break;
        default: code = 0;
    }
    printf("ASCII: %d | Ma the: %d\n",(int)c, code);
    return 0;

    }
