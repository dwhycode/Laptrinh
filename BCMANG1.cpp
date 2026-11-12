#include <stdio.h>
#include <math.h>

// 1. Nhập mảng 1 chiều gồm n phần tử[cite: 2]
void Nhap_Array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
}

// 2. Xuất mảng 1 chiều gồm n phần tử[cite: 2]
void In_Array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// 3. Trả về trung bình các phần tử của mảng[cite: 2]
float Trungbinh_Array(int A[], int n) {
    if (n <= 0) return 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    return (float)sum / n;
}

// 4. Trả về giá trị của phần tử lớn nhất trong mảng A[cite: 2]
int Max_Array(int A[], int n) {
    if (n <= 0) return -1;
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

// Hàm phụ kiểm tra số nguyên tố
int laSoNguyenTo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

// 5. Đếm số lượng các số nguyên tố trong mảng A[cite: 2]
int Dem_nguyento(int A[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(A[i])) {
            count++;
        }
    }
    return count;
}

// 6. Trả về số lần xuất hiện của phần tử x trong mảng A[cite: 2]
int Timkiem(int A[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            count++;
        }
    }
    return count;
}

// 7. Trả về số phần tử khác nhau trong mảng A[cite: 2]
int Dem_pt_khac(int A[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        int trung = 0;
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                trung = 1;
                break;
            }
        }
        if (!trung) {
            dem++;
        }
    }
    return dem;
}

// 8. Chèn phần tử x vào vị trí k trong mảng A[cite: 2]
void Insert_Array(int A[], int *n, int x, int k) {
    if (k < 0) k = 0;
    if (k > *n) k = *n;
    for (int i = *n; i > k; i--) {
        A[i] = A[i - 1];
    }
    A[k] = x;
    (*n)++;
}

// 9. Xóa tất cả các phần tử trùng với x trong mảng A[cite: 2]
int Delete_Array(int A[], int *n, int x) {
    int found = 0;
    for (int i = 0; i < *n; ) {
        if (A[i] == x) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                A[j] = A[j + 1];
            }
            (*n)--;
        } else {
            i++;
        }
    }
    return found ? 1 : 0;
}

// 10. Sắp xếp mảng A theo thứ tự tăng dần[cite: 2]
void Sapxep_Array(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
    int A[100];
    int n = 0;
    int chon;

    do {
        printf("\n==================================================\n");
        printf("       CHUONG TRINH QUAN LY MANG MOT CHIEU        \n");
        printf("==================================================\n");
        printf("1. Nhap mang mot chieu[cite: 3]\n");
        printf("2. In mang mot chieu[cite: 3]\n");
        printf("3. Tinh trung binh cac phan tu cua mang[cite: 3]\n");
        printf("4. Xuat phan tu lon nhat cua mang[cite: 3]\n");
        printf("5. Dem so luong cac so nguyen to trong mang[cite: 3]\n");
        printf("6. Dem so lan xuat hien cua mot phan tu x trong mang[cite: 3]\n");
        printf("7. Dem so phan tu khac nhau trong mang[cite: 3]\n");
        printf("8. Chen phan tu x vao vi tri k trong mang[cite: 3]\n");
        printf("9. Xoa tat ca cac phan tu trung voi x trong mang[cite: 3]\n");
        printf("10. Sap xep mang theo thu tu tang dan[cite: 3]\n");
        printf("11. Thoat[cite: 3]\n");
        printf("--------------------------------------------------\n");
        printf("Ban chon muc nao: ");
        scanf("%d", &chon);

        switch(chon) {
            case 1:
                printf("Nhap so luong phan tu n: ");
                scanf("%d", &n);
                Nhap_Array(A, n);
                break;
            case 2:
                printf("Mang hien tai: ");
                In_Array(A, n);
                break;
            case 3:
                printf("Gia tri trung binh cac phan tu: %.2f\n", Trungbinh_Array(A, n));
                break;
            case 4:
                if (n > 0) printf("Phan tu lon nhat trong mang: %d\n", Max_Array(A, n));
                else printf("Mang rong!\n");
                break;
            case 5:
                printf("So luong so nguyen to trong mang: %d\n", Dem_nguyento(A, n));
                break;
            case 6: {
                int x;
                printf("Nhap phan tu x can tim: ");
                scanf("%d", &x);
                printf("So lan xuat hien cua %d la: %d\n", x, Timkiem(A, n, x));
                break;
            }
            case 7:
                printf("So phan tu khac nhau trong mang: %d\n", Dem_pt_khac(A, n));
                break;
            case 8: {
                int x, k;
                printf("Nhap gia tri x can chen: ");
                scanf("%d", &x);
                printf("Nhap vi tri k can chen: ");
                scanf("%d", &k);
                Insert_Array(A, &n, x, k);
                printf("Da chen thanh cong! Mang sau khi chen:\n");
                In_Array(A, n);
                break;
            }
            case 9: {
                int x;
                printf("Nhap gia tri x can xoa: ");
                scanf("%d", &x);
                int kq = Delete_Array(A, &n, x);
                if (kq == 1) {
                    printf("Xoa thanh cong! Mang sau khi xoa:\n");
                    In_Array(A, n);
                } else {
                    printf("Khong tim thay phan tu nao trung với x de xoa!\n");
                }
                break;
            }
            case 10:
                Sapxep_Array(A, n);
                printf("Da sap xep mang tang dan thanh cong:\n");
                In_Array(A, n);
                break;
            case 11:
                printf("Ban da thoat khoi chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (chon != 11);

    return 0;
}