#include <stdio.h>
int main() {
	int cu, moi;
	int tieuThu;
	float tienDien = 0;
	printf("Nhap chi so cong to dien cu: ");
    scanf("%d", &cu);
    printf("Nhap chi so cong to dien moi: ");
    scanf("%d", &moi);
    if (moi < cu) {
    	printf("Loi: Chi so moi không duoc nho hon chi so cu.\n");
        return 1;
	}
	tieuThu = moi - cu;
	if (tieuThu <= 50) {
        tienDien = tieuThu * 10.000;
    } else if (tieuThu <= 100) {
        tienDien = 50 * 10.000 + (tieuThu - 50) * 15.000;
    } else if (tieuThu <= 150) {
        tienDien = 50 * 10.000 + 50 * 15.000 + (tieuThu - 100) * 20.000;
    } else if (tieuThu <= 200) {
        tienDien = 50 * 10.000 + 50 * 15.000 + 50 * 20.000 + (tieuThu - 150) * 25.000;
    } else {
        tienDien = 50 * 10.000 + 50 * 15.000 + 50 * 20.000 + 50 * 25.000 + (tieuThu - 200) * 30.000;
    }
    printf("So dien tiêu thu trong tháng: %d kWh\n", tieuThu);
    printf("Tien dien phai tra: %.2f VNÐ\n", tienDien);
    return 0;
}
