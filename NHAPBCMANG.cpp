#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

void nhapmang(int A[], int n){
    for (int i=0; i<n; i++){
        printf("A[%d]=",i); scanf("%d",&A[i]);}
    }


void in(int A[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}

//trung bình = tổng các phần tử / số phần tử.
float tbmang(int A[], int n){
    int tong=0;
    for (int i=0; i<n; i++){
        tong=tong+A[i];
    }
    return (float)tong/n;
}

void sapxep(int A[], int n){
    int tt;
    for (int i=0;i<n-1; i++){
    for (int j=i+1;j<n;j++){
        if(A[i]>A[j]){
            tt=A[i];
            A[i]=A[j];
            A[j]=tt;
            
        }
    }
   }
}

int maxmang(int A[], int n){
    int max=A[0];
    for (int i=0; i<n; i++){
        if(A[i]>max)
        {
        max=A[i];
        }
    }
    return max;
}

int demngto(int A[], int n){
    int dem=0;
    for(int i=0; i<n; i++){
        if(A[i]>=2){
            bool snt=true;
            for(int j=2; j< A[i]; j++){
            if(A[i]%j==0){
                    snt=false; break;
            }
        }
        if(snt){dem++;}
        }
    }
    return dem;
}

int timkiem(int A[], int n, int x){
    int dem=0;
    for(int i=0; i<n; i++){
        if(A[i]==x){
            dem++;
        }
    }
    return dem;
}

int demPTkhac(int A[], int n){
    int dem=0;
    for(int i=0; i<n; i++){
        int trung=1;
        for(int j=0; j<i; j++){
            if(A[i]==A[j]){
                trung = 0; break;
            }
        }
        if(trung==1){dem++;}
        }
    return dem;
}

void chen(int A[],int &n,int x, int k){
    if(k>=0 && k<=n){
        for(int i=n;i>k;i--){
            A[i]=A[i-1];
        }
        A[k]=x;
        n++;
    }
}

int Delete(int A[], int &n, int x){
    int xoa=0, i=0;
    while (i<n){
        if(A[i]==x){
            for(int j=i; j<n-1;j++){
                A[j]=A[j+1]; }
            n--;
            xoa=1;            
        } else {i++;}
        }
        return xoa;
    }
int main(){
    //menu chính
    int chon, A[100],n=0;
    int x,k,max;
    printf("Nhap n:"); scanf("%d", &n);
    do{
        printf("--------------------------------------------------\n");
        printf("1. Nhap mang 1 chieu\n");
        printf("2. In mang 1 chieu\n");
        printf("3. Tinh trung binh cac phan tu cua mang\n");
        printf("4. Xuat phan tu lon nhat cua mang\n");
        printf("5. Dem so luong cac so nguyen to trong mang\n");
        printf("6. Dem so lan xuat hien cua mot phan tu x trong mang\n");
        printf("7. Dem so phan tu khac nhau trong mang\n");
        printf("8. Chen phan tu x vao vi tri k trong mang\n");
        printf("9. Xoa tat ca cac phan tu trung voi x trong mang\n");
        printf("10. Sap xep mang theo thu tu tang dan\n");
        printf("11. THOAT\n");
        printf("Ban chon muc nao: "); scanf("%d",&chon);
        switch(chon){
            case 1: nhapmang(A,n); break;

            case 2: in(A,n); printf("\n"); break;

            case 3: printf("Trung binh cac phan tu cua mang la: %.4f",tbmang(A,n));
                    printf("\n"); break;

            case 4: printf("Phan Tu Lon Nhat cua Mang: %d",maxmang(A,n));
                    printf("\n"); break;

            case 5: printf("So luong cac so nguyen to trong mang la: %d", demngto(A,n));
                    printf("\n"); break;

            case 6: printf("Nhap x:"); scanf("%d",&x);
                     printf("So lan xuat hien cua 1 phan tu x trong mang la: %d",timkiem(A,n,x));
                     printf("\n");    break;

            case 7: printf("So phan tu khac nhau trong mang : %d", demPTkhac(A,n));
                    printf("\n"); break;

            case 8: printf("Nhap x can chen:");scanf("%d",&x);
                    printf("Nhap vi tri k:"); scanf("%d",&k);
                    if(k>=0 && k <= n && n < maxmang(A,n))
                        {chen(A,n,x,k); printf("Da chen %d vao %d\n",x,k); in(A,n);}
                    else {printf("THONG TIN KHONG HOP LE");}
                    printf("\n");
            break;
            case 9: printf("Nhap gia tri x can xoa:"); scanf("%d",&x);
                if(Delete(A,n,x)){
                printf("DA XOA TAT CA PHAN TU %d TRONG MANG\n",x);}
                else{ 
                     printf("khong tim thay %d trong mang!\n", x); }
                     in(A,n);printf("\n");
                break;

            case 10: sapxep(A,n);
            printf("Da sap xep : "); in(A,n);
            printf("\n");
            break;
            case 11: printf("THOAT CHUONG TRINH\n"); break;
            default: printf("VUI LONG LUA CHON LAI!\n");
        }
    }while(chon!=11);
    return 0;
}
   