#include<stdio.h>
#include<math.h>
int main()
{
   int age = 25;
   printf("My age is %d\n", age);
   return 0;
}

{
    int age=0;
    float gpa=0.0f;
    char grade='\0';
    char name[30]="";

    printf("Nhap tuoi: "); scanf("%d", &age);
    printf("Nhap diem trung binh: "); scanf("%f", &gpa);
    printf("Nhap hoc luc: "); scanf(" %c", &grade);
    printf("Nhap ten: "); scanf("%s",&name);

    printf("%d\n", age); 
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}

//SHOPPING CART
{
    char item[30]="";
    float price=0.0f;
    int quantity=0;
    char currency='d';
    float total=0.0f;

    printf("Nhap ten san pham: "); fgets(item, sizeof(item), stdin);

    printf("Nhap gia san pham: "); scanf("%f", &price);
    printf("Nhap so luong: "); scanf("%d", &quantity);
    printf("Nhap don vi tien te: "); scanf(" %c", &currency);

    total = price * quantity;

    printf("Ban vua mua %s voi gia %.3f %c\n", item, price, currency);
    printf("Tong tien: %.3f %c\n", total, currency);
}

