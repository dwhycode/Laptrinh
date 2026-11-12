#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

float TINHCV_HT(int r){
    return 2*3.14*r;
}

float TINHCV_HV(int canh){
    return canh*4;
}

float TINHCV_HCN(int d,int r){
    return (d+r)*2;
}

float TINHCV_HTG(int c1, int c2, int c3){
    return c1+c2+c3;
}

float TINHCV_MC(int r){
    return 4*3.14*r*r;
}

//dientich
float TINHDT_HT(int r){
    return 3.14*r*r;
}

float TINHDT_HV(int canh){
    return canh*canh;
}

float TINHDT_HCN(int d, int r){
    return d*r;
}

float TINHDT_HTG(int c1, int c2, int c3){
    double p=(c1+c2+c3)/2.0;
    return sqrt(p*(p-c1)*(p-c2)*(p-c3));
}

float TINHDT_MC(int r){
    return 4*3.14*r*r;
}

int main()
{
    int chon, chon1, chon2;
    float r,d,canh,c1,c2,c3;
    //menu chinh
    do{
        printf("\n--------------------------------");
        printf("\nCHUONG TRINH CHU VI VA DIEN TICH\n");
        printf("1. TINH CHU VI\n");
        printf("2. TINH DIEN TICH\n");
        printf("3. THOAT\n");
        printf("Ban chon muc nao:"); scanf("%d",&chon);
        switch(chon){
            case 1:
                do{
                    printf("\n--------------------------------");
                    printf("\nCHUONG TRINH TINH CHU VI\n");
                    printf("1. HINH TRON\n");
                    printf("2. HINH VUONG\n");
                    printf("3. HINH CHU NHAT\n");
                    printf("4. HINH TAM GIAC\n");
                    printf("5. MAT CAU\n");
                    printf("6. THOAT\n");
                    printf("Ban chon muc nao:"); scanf("%d",&chon1);
                    switch(chon1){
                        case 1: {
                            printf("Nhap r: "); scanf("%f",&r);
                            printf("CHU VI HINH TRON LA: %.4f", TINHCV_HT(r));
                            break;
                        }
                        case 2: {
                            printf("Nhap canh: "); scanf("%f",&canh);
                            printf("CHU VI HINH VUONG LA: %.4f", TINHCV_HV(canh));
                            break;
                        }
                        case 3: {
                            printf("Nhap d: "); scanf("%f",&d);
                            printf("Nhap r: "); scanf("%f",&r);
                            printf("CHU VI HINH CHU NHAT LA: %.4f", TINHCV_HCN(d,r));
                            break;
                        }
                        case 4: {
                            printf("Nhap cac canh c1,c2,c3: "); scanf("%f" "%f" "%f",&c1,&c2,&c3);
                            printf("CHU VI HINH TAM GIAC LA: %.4f", TINHCV_HTG(c1,c2,c3));
                            break;
                        }
                        case 5: {
                            printf("Nhap r: "); scanf("%f",&r);
                            printf("CHU VI MAT CAU LA: %.4f", TINHCV_MC(r));
                            break;
                        }
                        case 6: {
                            printf("QUAY LAI MENU CHINH!");
                            break;
                        } default: printf("VUI LONG NHAP LAI!");
                    }
                }while (chon1 !=6); break;
                

            case 2:
            do{
                printf("\n--------------------------------");
                 printf("\nCHUONG TRINH TINH DIEN TICH\n");
                    printf("1. HINH TRON\n");
                    printf("2. HINH VUONG\n");
                    printf("3. HINH CHU NHAT\n");
                    printf("4. HINH TAM GIAC\n");
                    printf("5. MAT CAU\n");
                    printf("6. THOAT\n");
                    printf("Ban chon muc nao:"); scanf("%d",&chon2);
                    switch(chon2){
                        case 1: {
                            printf("Nhap r: "); scanf("%f",&r);
                            printf("DIEN TICH HINH TRON LA: %f", TINHDT_HT(r));
                            break;
                        }
                        case 2: {
                            printf("Nhap canh: "); scanf("%f",&canh);
                            printf("DIEN TICH HINH VUONG LA: %.4f", TINHDT_HV(canh));
                            break;
                        }
                        case 3: {
                            printf("Nhap d: "); scanf("%f",&d);
                            printf("Nhap r: "); scanf("%f",&r);
                            printf("DIEN TICH HINH CHU NHAT LA: %f", TINHDT_HCN(d,r));
                            break;
                        }
                        case 4: {
                            printf("Nhap cac canh c1,c2,c3: "); scanf("%f" "%f" "%f",&c1,&c2,&c3);
                            printf("DIEN TICH HINH TAM GIAC LA: %.4f", TINHDT_HTG(c1,c2,c3));
                            break;
                        }
                        case 5: {
                            printf("Nhap r: "); scanf("%f",&r);
                            printf("DIEN TICH MAT CAU LA: %.4f", TINHDT_MC(r));
                            break;
                        }
                        case 6: {
                            printf("QUAY LAI MENU CHINH!");
                            break;
                        } default: printf("VUI LONG NHAP LAI!");
                    }
                }while (chon2 !=6); break;
            
        
            case 3: printf("BAN DA THOAT KHOI CHUONG TRINH!"); break;
                    default: printf("VUI LONG NHAP LAI!");
    }}while(chon!=3);
    
    return 0;
}
