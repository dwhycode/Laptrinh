#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int LT(int a,int n){
    int LT=1;
    for (int i=1;i<=n;i++){
        LT=LT*a;
    }
    return LT;
}

int GT(int n){
    int GT=1;
    for(int i=1; i<=n; i++){
        GT=GT*i;
    }
    return GT;
}

float S1(int n){
    float S1=0;
    for (int i=0; i<=n; i++){
        S1+= 1.0/GT(i);
    }
    return S1;
}
float S2(int n){
    float S2=0;
    for(int i=0; i<=n; i++){
        S2+= 1.0*LT(2,i)/GT(i);
    }
    return S2;
}
float S3(int n){
    float S3=0;
    for (int i=0; i<=n; i++){
        if(i%2!=0){
            S3+= 1.0 * LT(-2,i)/GT(i);
        } else {
            S3+= 1.0*LT(2,i)/GT(i);
        }
    }
    return S3;
}
float S4(int n){
    float S4=0;
    for (int i=0; i<=n; i++){
        S4+= LT(-1,i)*1.0/GT(i);
    }
    return S4;
}
float S5(int n){
    float S5=1.0;
    for (int i=2; i<=n; i++){
        int tongmau=0;
        for(int j=1; j<=i; j++){
            tongmau+=j*j;
        }
        S5+=1.0/tongmau;
    }
    return S5;
}


int main(){
    int n,chon,tongmau;
    printf("Nhap n: "); scanf("%d",&n);
    do{
        printf("\n--------------------------------");
        printf("\nCHUONG TRINH TINH TONG DAY SO");
        printf("\n1. Tong S1");
        printf("\n2. Tong S2");
        printf("\n3. Tong S3");
        printf("\n4. Tong S4");
        printf("\n5. Tong S5");
        printf("\n6. THOAT");
        printf("\nBAN CHON MUC NAO:"); scanf("%d",&chon);
        switch(chon){
            case 1: printf("S1= %.4f", S1(n));break;
            case 2: printf("S2= %.4f", S2(n));break;
            case 3: printf("S3= %.4f", S3(n));break;
            case 4: printf("S4= %.4f", S4(n));break;
            case 5: printf("S5= %.4f", S5(n));break;
            case 6: printf("CAM ON DA SU DUNG CHUONG TRINH");break; default: printf("VUI LONG NHAP LAI");
        }
    } while(chon!=6);
    return 0;
}
