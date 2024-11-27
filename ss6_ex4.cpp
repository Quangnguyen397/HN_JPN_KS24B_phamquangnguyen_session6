#include <stdio.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        printf("Hai nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem.\n");
    }

    return 0;
}

