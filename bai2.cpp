#include<stdio.h>

int main() {
    int number;
    printf("Nhap v�o mot so: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d l� so chan\n", number);
    } else {
        printf("%d l� so le\n", number);
    }

    return 0;
}

