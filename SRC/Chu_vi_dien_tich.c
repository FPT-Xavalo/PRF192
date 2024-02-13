#include <stdio.h>

#define PI 3.14159

float tinh_dien_tich_hinh_tron(float r);
float tinh_chu_vi_hinh_tron(float r);
float tinh_chu_vi_hinh_thang(float a, float b, float c, float d);
float tinh_dien_tich_hinh_thang(float a, float b, float h);
float tinh_dien_tich_tam_giac_vuong(float a, float b);

int main() {
    int choice;
    float r, a, b, c, d, h;

    while (1) {
        printf("Menu:\n");
        printf("1. Tinh dien tich hinh tron\n");
        printf("2. Tinh chu vi hinh tron\n");
        printf("3. Tinh chu vi hinh thang\n");
        printf("4. Tinh dien tich hinh thang\n");
        printf("5. Tinh dien tich tam giac vuong\n");
        printf("6. Thoat\n");
        printf("Chon mot lua chon (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap ban kinh: ");
                scanf("%f", &r);
                printf("Dien tich hinh tron la: %f\n", tinh_dien_tich_hinh_tron(r));
                break;
            case 2:
                printf("Nhap ban kinh: ");
                scanf("%f", &r);
                printf("Chu vi hinh tron la: %f\n", tinh_chu_vi_hinh_tron(r));
                break;
            case 3:
                printf("Nhap cac canh hinh thang (a, b, c, d) va chieu cao (h) theo thu tu: ");
                scanf("%f %f %f %f %f", &a, &b, &c, &d, &h);
                printf("Chu vi hinh thang la: %f\n", tinh_chu_vi_hinh_thang(a, b, c, d));
                break;
            case 4:
                printf("Nhap cac canh hinh thang (a, b) va chieu cao (h) theo thu tu: ");
                scanf("%f %f %f", &a, &b, &h);
                printf("Dien tich hinh thang la: %f\n", tinh_dien_tich_hinh_thang(a, b, h));
                break;
            case 5:
                printf("Nhap 2 canh goc vuong cua tam giac (a, b) theo thu tu: ");
                scanf("%f %f", &a, &b);
                printf("Dien tich tam giac vuong la: %f\n", tinh_dien_tich_tam_giac_vuong(a, b));
                break;
            case 6:
                printf("Cam on ban da su dung chuong trinh!\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }
}

float tinh_dien_tich_hinh_tron(float r) {
    return PI * r * r;
}
float tinh_chu_vi_hinh_tron(float r) {
    return 2 * PI * r;
}

float tinh_chu_vi_hinh_thang(float a, float b, float c, float d) {
    return a + b + c + d;
}

float tinh_dien_tich_hinh_thang(float a, float b, float h) {
    return (a + b) * h / 2;
}

float tinh_dien_tich_tam_giac_vuong(float a, float b) {
    return a * b / 2;
}


