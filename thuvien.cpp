#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int ngay; int thang; int nam;
} date;

typedef struct{
    char masach[100];
    char tensach[100];
    char linhvuc[100];
    date nxb;
} sach;


void nhapsach(sach S[], int *n){
    int i=*n; char f;
do{
printf("Nhap thong tin cho cuon sach thu %d:\n",i+1);
printf("Nhap ma so sach:"); 
    fgets(S[i].masach,100,stdin); S[i].masach[strcspn(S[i].masach,"\n")]='\0';
printf("Nhap ten sach:"); 
    fgets(S[i].tensach,100,stdin); S[i].tensach[strcspn(S[i].tensach,"\n")]='\0';
printf("Nhap linh vuc:");
    fgets(S[i].linhvuc,100,stdin); S[i].linhvuc[strcspn(S[i].linhvuc,"\n")]='\0';
printf("Nhap ngay/thang/nam (dd/mm/yyyy):"); scanf("%2d/%2d/%4d",&S[i].nxb.ngay,&S[i].nxb.thang,&S[i].nxb.nam);
i++;
printf("\nBan co muon nhap them thong tin sach khac khong? (c/k): "); scanf(" %c",&f);
while(getchar() != '\n');
    }while (f == 'c'|| f == 'C');
    *n=i;
}


void insach(sach S[], int n){
    printf("\n                                 DANH SACH CUON SACH");
    printf("\n-----------------------------------------------------------------------------------");
    printf("\n| STT | MASACH |          TEN SACH            |   LINH VUC    |   THOI GIAN XB    |");
    printf("\n-----------------------------------------------------------------------------------");
        for(int i =0; i<n; i++){
            printf("\n|%5d|%8s|%30s|%15s|    %2d/%2d/%4d     |",i+1,S[i].masach,S[i].tensach,S[i].linhvuc,S[i].nxb.ngay,S[i].nxb.thang,S[i].nxb.nam);
        }
    printf("\n-----------------------------------------------------------------------------------");
    }


void sapxep(sach S[], int n){
sach tam;
for(int i=0; i<n-1;i++){
    for(int j=i+1; j<n;j++){
    if(strcmp(S[i].masach, S[j].masach)>0){
        tam=S[i];
        S[i]=S[j];
        S[j]=tam;
         }
        }
    }   
}

int timkiem(sach S[],int n){
    char f,cantim[100];
    int dem;
    do{
        dem=0;
            printf("Nhap ma sach can tim:"); fgets(cantim,100,stdin); cantim[strcspn(cantim, "\n")]='\0';
            for(int i=0; i<n; i++){
            if(strcmp(S[i].masach,cantim)== 0){
                dem++;
                printf("Da tim thay sach o vi tri thu %d\n",i+1);
    printf("\n-----------------------------------------------------------------------------------");
    printf("\n| STT | MASACH |          TEN SACH            |   LINH VUC    |   THOI GIAN XB    |");
    printf("\n-----------------------------------------------------------------------------------");
        for(int i =0; i<n; i++){
            printf("\n|%5d|%8s|%30s|%15s|    %2d/%2d/%4d     |",i+1,S[i].masach,S[i].tensach,S[i].linhvuc,S[i].nxb.ngay,S[i].nxb.thang,S[i].nxb.nam);
        }
    printf("\n-----------------------------------------------------------------------------------");
            }
        }
        if(dem==0){printf("KHONG TIM THAY SACH NAO CO MA SACH: %s\n",cantim);}
    printf("\nBan co muon tim kiem tiep sach khac khong ? (c/k): "); scanf(" %c",&f);
     while(getchar() != '\n');
    }while(f =='c' || f == 'C');
    return dem;
} 

void chinhsua(sach S[], int n){
char f,cantim[100]; int dem;
do{
    dem=0;
    printf("Nhap ma so sach can chinh sua:\n");
    fgets(cantim,100,stdin); cantim[strcspn(cantim, "\n")]='\0';
        for(int i=0; i<n;i++){
            if(strcmp(S[i].masach, cantim)==0){
                dem++;
            printf("DA TIM THAY SACH! NHAP THONG TIN MOI:");
            printf("Nhap ten sach:"); 
                fgets(S[i].tensach,100,stdin); S[i].tensach[strcspn(S[i].tensach,"\n")]='\0';
            printf("Nhap linh vuc:");
                fgets(S[i].linhvuc,100,stdin); S[i].linhvuc[strcspn(S[i].linhvuc,"\n")]='\0';
            printf("Nhap ngay/thang/nam (dd/mm/yyyy):"); scanf("%2d/%2d/%4d",&S[i].nxb.ngay,&S[i].nxb.thang,&S[i].nxb.nam);
            while(getchar()!='\n'); 
            printf("DA THAY DOI THONG TIN SACH!");
            }
        }
        if(dem==0){printf("Khong tim thay so co ma: %s",cantim);}
        printf("\nBan co muon chinh sua thong tin sach khac khong? (c/k): "); scanf(" %c",&f);
        while(getchar() != '\n');
        }while(f =='c'|| f == 'C');
    }

void xoasach (sach S[], int *n){
char f,cantim[100]; int dem;
do{
    dem=0;
printf("Nhap ma sach can xoa sach thong tin:");
fgets(cantim,100,stdin); cantim[strcspn(cantim, "\n")]='\0';
    for(int i=0; i< *n;i++){
        if(strcmp(S[i].masach, cantim)==0){
        dem++;
        for(int j=i;j< *n-1; j++){
        S[j]=S[j+1];
            }
        (*n)--;
        i--;
        printf("Da xoa thong tin sach");
        }
    } if(dem==0){printf("KHONG TIM THAY MA SACH CAN XOA: %s",cantim);}
    printf("\nBan co muon xoa thong tin sach khac khong? (c/k): "); scanf(" %c",&f);
    while(getchar()!='\n');
    }while (f =='c'|| f == 'C');
}


int main(){
int n=0,chon;
sach S[1000];

do{
    printf("\n============================");
    printf("\nCHUONG TRINH QUAN LY SACH");
    printf("\n1. Nhap thong tin sach"); 
    printf("\n2. Sap xep sach theo ma sach");
    printf("\n3. In thong tin sach theo ma sach");
    printf("\n4. Tim kiem sach theo ma");
    printf("\n5. Chinh sua thong tin sach");
    printf("\n6. Xoa sach");
    printf("\n7. Thoat khoi chuong trinh");
    printf("\nBan chon muc nao:"); scanf("%d",&chon);
    while(getchar()!='\n');
    printf("============================\n");
    switch(chon){
        case 1: nhapsach(S,&n); break;
        case 2: printf("DA SAP XEP THEO MA SACH"); sapxep(S,n); insach(S,n); break;
        case 3: printf("Da in thong tin sach theo ma"); insach(S,n); break;
        case 4: timkiem(S,n); break;
        case 5: chinhsua(S,n); break;
        case 6: xoasach(S,&n); break;
        case 7: printf("BAN DA THOAT KHOI CHUONG TRINH!\n"); break;
        default: printf("VUI LONG CHON LAI TU 1-7!\n");
    }
}while(chon!=7);
return 0;
}