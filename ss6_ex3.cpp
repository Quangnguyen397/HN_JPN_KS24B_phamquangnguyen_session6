#include <stdio.h>
int main() {
    char correctPassword[] = "030906";  
    char enteredPassword[20]; 
    printf("Nhap mat khau: ");
    scanf("%s", enteredPassword); 
    if (enteredPassword == correctPassword) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }
    return 0;
}

