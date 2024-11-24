#include <stdio.h>
int main() {
	int n1, n2, n3;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &n1);
	printf("Nhap so thu hai: ");
	scanf("%d", &n2);
	printf("Nhap so thu ba: ");
	scanf("%d", &n3);
	if ((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1)) {
		printf("So thu ba (%d) nam trong khoang giua so thu nhat (%d) và so thu hai (%d).\n", n3, n1, n2);
	} else {
		printf("So thu ba (%d) khong nam trong khoang giua so thu nhat (%d) và so thu hai (%d).\n", n3, n1, n2);
	}
	return 0;
}
