#include <stdio.h>
int main() {
	int n;
	printf("Nhap vao so nam: ");
	scanf("%d", &n);
	if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
		printf("Day la nam nhuan\n");
	}else{
		printf("Day khong phai la nam nhuan\n");
	}
}
