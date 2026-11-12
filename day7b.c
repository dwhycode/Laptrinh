/*#include<math.h>
#include<stdio.h>
#include<conio.h>


//TERNARY OPERATOR (Toán tử temary)
//(condition) ? value_if_true for if-else statements
//("%kieu dlieu", (dieukien) ? "dung" : "sai");

#include<stdbool.h>
int main(){

int age = 20;
int hours = 12;
int minu = 20;
char *meridiem = (hours < 12) ? "AM" : "PM";

printf("Bay gio la : %02d:%02d %s\n", hours, minu, meridiem );
printf("Ban la: %s\n", (age > 18) ? "nguoi lon" : "tre con");

return 0;
}



//TYPEDEF (ĐỊNHNGHĨA) typedef existing_type new_game;
typedef int Number; //(doiten kieu dulieu)

int main(){

    Number x = 3;
    Number y = 4;
    Number z = x + y;

printf("%d",z);

    return 0;
}


// ENUMS (Các kiểu liệt kê)
typedef enum {
    Sunday = 1, Monday = 2, Tuesday = 3, Wednesday= 4,
     Thursday = 5, Friday = 6, Saturday = 7
}Day;

int main(){

    Day today = Thursday;

    if(today == Sunday || today == Saturday){
    printf("It's the weekend");
    }else {printf("It's a weekday");}

    return 0;
}


//Structs (Cấu trúc) ???
#include<stdbool.h>

typedef struct {
    char ten[50];
    int age;
    float gpa;
    bool fulltime;
}hocsinh;
int main(){

    hocsinh hs1 = {"DWhy", 20, 3.5, true};

    printf("%s\n",hs1.ten);
    printf("%s\n",hs1.age);
    printf("%s\n",hs1.gpa);



    return 0;
}


        //Arrays of structs(Mảng các cấu trúc)

typedef struct { // doi ten + dinh nghia ctruc
        char mode[25];
        int year;
        int price;
}Car;

int main(){
  Car cars[] = {{"Yamaha", 2020, 30300},
                {"Honda", 2022, 30000},
                {"EX", 2003, 35000}};

int number = sizeof(cars) / sizeof(cars[0]);

for(int i = 0; i < number; i++){
    printf("%s %d %d\n", cars[i].mode, cars[i].year, cars[i].price);
}


//Nhap du lieu gom gom nhung gi :
    struct car car1 = {"Yamaha", 2020, 30300};
    struct car car2 = {"Honda", 2022, 30000};
    struct car car3 = {"EX", 2003, 35000};

    //Truy xuat va in thong tin:
    printf("%s %d %d\n",car1.mode, car1.year, car1.price);
    printf("%s %d %d\n",car2.mode, car2.year, car2.price);
    printf("%s %d %d\n",car3.mode, car3.year, car3.price);


    return 0;
}*/

#include<math.h>
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

typedef struct {
	char mh[5];
	char tenhang[30];
	char dvt[20];
	float dgia;
	int sluong;
	float trigia;	
}HH;
int main (){
	HH hh1[100];
	int i=0,j,n;
	char f;
	int nb= sizeof(hh1) / sizeof(hh1[0]);
	do{
		printf("Nhap hang hoa thu %d cua danh sach",i+1);
		printf("\nMa hang:");scanf("%s",&hh1[i].mh);
		printf("\nTen Hang:");scanf("%s",hh1[i].tenhang);
		printf("\nDon vi tinh:");scanf("%s",hh1[i].dvt);
		printf("\nDon gia:");scanf("%f",&hh1[i].dgia);
		printf("\nSo luong:");scanf("%d",&hh1[i].sluong);

		hh1[i].trigia=hh1[i].dgia*hh1[i].sluong;
		i++;

		printf("\nBan co muon nhap tiep khong (c/k): ");scanf(" %c",&f);
	} while (f=='c' && f=='C');

		n=i;
	printf("\n----Danh sach hang hoa sau khi nhap----\n");
    printf("\n%-10s %-15s %-10s %-10s %-10s %-10s\n",
           "MAHANG", "TENHANG", "DVT", "DONGIA", "SOLUONG", "TRIGIA");
	    for (i = 0; i < n; i++){
		printf("%-10s %-15s %-10s %-10.2f %-10d %-10.2f\n",hh1[i].mh,hh1[i].tenhang,hh1[i].dvt,hh1[i].dgia,hh1[i].sluong,hh1[i].trigia);
	}
	
	
	
	return 0;
}



#include<math.h>
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

typedef struct {
	char mh[5];
	char tenhang[30];
	char dvt[20];
	float dgia;
	int sluong;
	float trigia;	
}HH;
int main (){
	HH hh1[100];
	int i=0,j,n;
	char f;
	int nb= sizeof(hh1) / sizeof(hh1[0]);
	do{
		printf("Nhap hang hoa thu %d cua danh sach",i+1);
		printf("\nMa hang:");scanf("%s",&hh1[i].mh);
		printf("\nTen Hang:");scanf("%s",hh1[i].tenhang);
		printf("\nDon vi tinh:");scanf("%s",hh1[i].dvt);
		printf("\nDon gia:");scanf("%f",&hh1[i].dgia);
		printf("\nSo luong:");scanf("%d",&hh1[i].sluong);

		hh1[i].trigia=hh1[i].dgia*hh1[i].sluong;
		i++;

		printf("\nBan co muon nhap tiep khong (c/k): ");scanf(" %c",&f);
	} while (f=='c' || f=='C');
	
		n=i;
	printf("\n----Danh sach hang hoa sau khi nhap----\n");	   
	 printf("+----------+----------+----------+----------+----------+----------+\n");
    printf("|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n",
           "MAHANG", "TENHANG", "DVT", "DONGIA", "SOLUONG", "TRIGIA");
	    for (i = 0; i < n; i++){
	 printf("+----------+----------+----------+----------+----------+----------+\n");
		printf("|%-10s|%-10s|%-10s|%-10.2f|%-10d|%-10.2f|\n",hh1[i].mh,hh1[i].tenhang,hh1[i].dvt,hh1[i].dgia,hh1[i].sluong,hh1[i].trigia);
	 printf("+----------+----------+----------+----------+----------+----------+\n");

	}
	
		printf("\n----Danh sach hang hoa co so luong ban > 100 ----\n");
	for(int i=0; i<n;i++){
		if(hh1[i].sluong>100){
	 printf("+----------+----------+----------+----------+----------+----------+\n");
			printf("|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","MAHANG","TENHANG","DVT","DONGGIA","SOLUONG","TRIGIA");
	 printf("+----------+----------+----------+----------+----------+----------+\n");
			printf("|%-10s|%-10s|%-10s|%-10.2f|%-10d|%-10.2f|\n",hh1[i].mh,hh1[i].tenhang,hh1[i].dvt,hh1[i].dgia,hh1[i].sluong,hh1[i].trigia);
	 printf("+----------+----------+----------+----------+----------+----------+\n");
		}
	}
	return 0;
}