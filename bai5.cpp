#include<stdio.h>

int main() {
    int num1, num2, num3;
    printf("nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("nhap so thu 2: ");
    scanf("%d", &num2);
    printf("Nh?p ap so thu 3: ");
    scanf("%d", &num3);
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So %d nam trong khoang giua %d và %d.\n", num3, num1, num2);
    } 
	else {
        printf("So %d khong nam trong khoang giua %d và %d.\n", num3, num1, num2);
    }

    return 0;
}

