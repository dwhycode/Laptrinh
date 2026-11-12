#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Nhap (int A[], int n){
	for (int i=0; i<n; i++){
		printf("A[%d]=",i); scanf(" %d",&A[i]);
	}
}

void In(int A[], int n){
	for (int i=0; i<n ; i++){
		printf(" %d",A[i]);
	}
}

float AVG(int A[], int n){
	float tong=0;
	for(int i=0; i<n; i++){
		tong+=A[i];
	}
	return (float)tong/n;
}

void sapxep(int A[], int n){
	int tam;
	for(int i=0; i<n-1; i++){
	for(int j=i+1; j<n; j++){
		if(A[i]>A[j]){
			tam=A[i];
			A[i]=A[j];
			A[j]=tam;
			}
		}
	}
}

int Max(int A[], int n){
	int max=A[0];
	for (int i=0 ; i<n; i++){
		if(A[i]>max){
			max=A[i];
		}
	}
    return max;
}

int Demsnt(int A[], int n){
	int dem=0;
	for (int i=0; i<n; i++){
		if (A[i]>=2){
		bool snt=true;
		for (int j=2; j<A[i]; j++){
			if(A[i]%j==0){
				snt=false; break;
			}
		}
		if(snt){dem++;}}
		}
	return dem;
}

int tim(int A[], int n, int x){
	int dem=0;
	for(int i=0; i<n; i++){
		if(A[i]==x){
			dem++;
		}
	}
	return dem;
}

int demptk(int A[], int n){
	int dem=0;
	for( int i=0; i<n; i++){
		int trung=1;
		for(int j=0; j<i; j++){
			if(A[i]==A[j]){
				trung=0; break;
			}
		}
		if(trung==1){dem++;}
		}
		return dem;
}

void chen (int A[], int &n, int x, int k){
	if(k>=0 && k<= n){
		for (int i=n; i>k; i--){
			A[i]=A[i-1];
		}
		A[k]=x;
		n++;
	}
}

int xoa(int A[], int &n, int x){
	int xoa=0, i=0;
	while(i<n){
		if(A[i]==x){
			for(int j=i; j<n-1; j++){
				A[j]=A[j+1];
			}
			n--;
			xoa=1;
		}
		else{i++;}
		}
		return xoa;
	}
	
	
int main(){
	int n=0,x,k,chon;
    int A[100];
    
	do{
		printf("\n====CHUONG TRINH QUAN LY MANG 1 CHIEU====\n");
		printf("1. Nhap mang 1 chieu\n");	
		printf("2. In mang  1 chieu\n");	
		printf("3. Tinh trung binh cac phan tu cua mang\n");	
		printf("4. Xuat phan tu lon nhat cua mang\n");	
		printf("5. Dem so luong cac nguyen to trong mang\n");	
		printf("6. Dem so lan xuat hien cua 1 phan tu x trong mang\n");	
		printf("7. Dem so phan tu khac nhau trong mang\n");	
		printf("8. Chen phan tu x vao vi tri k trong mang\n");	
		printf("9. Xoa tat ca cac phan tu trung voi x trong mang\n");	
		printf("10. Sap xep mang theo thu tu tang dan\n");	
		printf("11. Thoat\n");	
		printf("Ban chon muc nao:"); scanf("%d",&chon);
		switch(chon){
			case 1: printf("Nhap n:");scanf("%d",&n); Nhap(A,n); break;
			case 2: printf("Mang 1 chieu gom cac phan tu: ");In(A,n); break;
			case 3: printf ("Trung binh phan tu cua mang la: %.4f",AVG(A,n)); break;
			case 4: printf ("Phan tu lon nhat cua mang la: %d ",Max(A,n)); break;
			case 5: printf ("So luong cac nguyen to trong mang la: %d",Demsnt(A,n)); printf("\n");break;
			case 6: printf("Nhap gia tri cua x:");scanf("%d",&x);
					printf("Gia tri can tim: %d",tim(A,n,x));break;
			case 7: printf("So phan tu khac nhau: %d",demptk(A,n)); break; 
			case 8: printf("Nhap phan tu x can chen: "); scanf("%d",&x);
                    printf("Nhap vi tri k:"); scanf("%d",&k);
                    chen(A,n,x,k);In(A,n); break;
			case 9: printf("Nhap phan tu x can xoa:"); scanf ("%d",&x);
					if(xoa(A,n,x)){
						printf("Da xoa phan tu x %d trong mang \n",x); In(A,n);}
						else { printf("Khong tim thay phan tu x %d trong mang\n",x);} break;
			case 10: printf("Da sap xep mang theo thu tu tang dan: "); sapxep(A,n); printf("\n"); break;
			case 11: printf("DA THOAT CHUONG TRINH!\n");	break;
			default: printf("VUI LONG NHAP LAI TU 1-11!\n");
					}	
		}			while(chon!=11);
	return 0;
}