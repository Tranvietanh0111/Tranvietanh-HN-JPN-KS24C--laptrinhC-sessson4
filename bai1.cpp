#include<stdio.h>
int main(){
	int number;
	printf("nhap vao mot so");
	scanf("%d", &number);
	if(number>=0){
		printf("la so duong");
	}
	else{
		printf("la so am");
	}
	return 0;
}
