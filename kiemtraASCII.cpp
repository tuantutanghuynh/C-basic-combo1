#include <stdio.h> 

int main() {
        char kytu;
        printf("Nhap vao mot ky tu: ");
        scanf("%c", &kytu);
        printf("Ma ASCII cua ky tu %c la: %d\n", kytu, kytu);
        printf("Ky tu tiep theo la: %c\n", kytu + 1);

    return 0; 
}
