#include <stdio.h>
int main () {
	int m;
	printf("Nhap vao so thang: ");
	scanf("%d", &m);
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		printf("Thang nay co 31 ngay.\n");
	}else if(m == 4 || m == 6 || m == 9 || m == 11) {
		printf("Thang nay co 30 ngay.\n");
	}else if(m == 2) {
		printf("Thang 2 co 28 hoac 29 ngay (nam nhuan).\n");
	}else{
		printf("So thang nhap khong hop le.\n");
	}
	return 0;
}
