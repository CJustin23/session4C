#include <stdio.h>

int main() {
	int n;
	printf("Moi ban nhap vao mot so nguyen: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("Day la so chan.\n");
	}else{
		printf("Day la so le.\n");
	}
	return 0;
}
