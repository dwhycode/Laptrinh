#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>


//DAY 4 Switch case
/*{ // sai int thi %d, char %c = ''; 
char ngaytrongtuan;
printf("Nhap ngay trong tuan:"); scanf("%c",&ngaytrongtuan);

switch(ngaytrongtuan){
    case 'M': printf("Hom nay la thu 2"); break; 
    case 'T': printf("Hom nay la thu 3"); break;
    case 'W': printf("Hom nay la thu 4"); break;
    case 'R': printf("Hom nay la thu 5"); break;
    case 'F': printf("Hom nay la thus 6"); break;
    case 'S': printf("Hom nay la thu 7"); break;
    case 'U': printf("Hom nay la chu nhat"); break;
    default: printf("Khong co ngay nay trong tuan, vui long nhap lai (M,T,W,R,F,S,U)"); break;
}

 return 0;
}

//NESTED IF STATEMENTS //if lồng if
{
    float giatien = 10.000; 
    bool hocsinh = false; //giam 10%    //true = 1, false = 0
    bool sinhvien = true; //giam 20%

    //hocsinh = 9.000
    //sinhvien = 8.000
    //hocsinh + sinhvien = 7.000

    if(hocsinh && sinhvien){
        printf("hocsinh giam gia 10%%\n");
        printf("sinhvien duoc giam 20%%\n");
        giatien *=0.7;
    } else if(sinhvien){
        printf("Ban duoc giam gia 20%%\n");\
        giatien *=0.8; //giatien = giatien * 0.8
    }
    else if(hocsinh){
        printf("Ban duoc giam gia 10%%\n");
        giatien *= 0.9; //giatien = giatien * 0.9
    }
    
    printf("Gia tien sau khi giam la: %.3f dong",giatien);

return 0;
}

{ //CALCULATOR //nhap phep tinh, 2 so, in ra ket qua
char pheptinh = '\0'; //khai bao char thi phai co '' , neu khong se bi loi
double num1 =0.0, num2 =0.0, ketqua=0.0;

printf("Nhap so thu nhat:"); scanf("%lf",&num1);
printf("Nhap phep tinh (+, -,*, /):"); scanf(" %c",&pheptinh);
printf("Nhap so thu hai:"); scanf("%lf",&num2);

switch(pheptinh){
    case '+': ketqua= num1 + num2; break;
    case '-': ketqua= num1 - num2; break;
    case '*': ketqua= num1 * num2; break;
    case '/': ketqua= num1 / num2; break;
    default: printf("Phep tinh khong hop le, vui long nhap lai (+, -, *, /)\n"); break;
}

printf ("Ket qua cua phep tinh %.2lf %c %.2lf = %.2lf", num1,pheptinh,num2,ketqua);

return 0;
}



//LOGICAL OPERATORS //AND (&&), OR (||), NOT (!)
{
 int nhietdo = 31;

 if(nhietdo <= 0 || nhietdo >= 30){
    printf("Nhiet do dang khong binh thuong\n");
 } else {
    printf("Nhiet do dang binh thuong\n");
 }

return 0;
}

{ // '!' khong co 
    bool mattroi = true; //true = 1, false = 0

    if(!mattroi){
        printf("Hom nay troi co May\n");
    } else {
        printf("Hom nay troi co Nang\n");
    }
return 0;
}



//FUNCTIONS //goi ham
//void: khong tra ve gia tri
//int: tra ve gia tri nguyen
//double: tra ve gia tri thuc
//char: tra ve gia tri ky tu
void sinhnhat (char ten[], int tuoi){
    printf("Chuc mung sinh nhat ban!\n");
    printf("Chuc mung sinh nhat cua %s!\n", ten);
    printf("Ban da %d tuoi!\n", tuoi);

}
int main()
{
    char ten[]= "Nguyen Van A";
    int tuoi = 20;

sinhnhat(ten, tuoi);

return 0;
}
//RETURN //ham tra ve gia tri
double cube(double num){

return num*num;
}
double square(double num){
    return num*num; //tra ve gia tri num * num, neu khong co return thi ham se khong tra ve gia tri, va khi goi ham se bi loi
}
int main()
{
    double x = cube(2.0); //ham cube tra ve gia tri,nen x se nhan gia tri do
    double y = cube(3.0);
    double z = cube(4.0);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}
bool tuoicheck(int age){
    if(age >= 18){
        return true; //tra ve gia tri true neu age >= 18
    } else {
        return false; //tra ve gia tri false neu age < 18
    }
}
int main()
{
    int age = 11;

    if(tuoicheck(age)){
        printf("Ban da du tuoi de tham gia\n");
    } else {
        printf("Ban chua du tuoi de tham gia\n");
    }
}

int getMax(int a, int b){
    if(a > b){
        return a; //tra ve gia tri a neu a > b
    } else {
        return b; //tra ve gia tri b neu a <= b
    }
}
int main(){
    int max = getMax(10,20); //ham getMax tra ve gia tri, nen max se nhan gia tri do

    printf("so lon nhat la: %d", max);
    return 0;
}

//VARIABLE SCOPE //bien toan cuc(void), bien cuc bo(int)...
int add(int x, int y){
    int result = x + y;
    return result; //tra ve gia tri result, neu khong co return thi ham se khong tra ve gia tri, va khi goi ham se bi loi
}
int subtract(int x, int y){
    int result = x - y;
    return result;//tra ve gia tri result, neu khong co return thi ham se khong tra ve gia tri, va khi goi ham se bi loi
}

int main(){
int result = subtract(3, 4); //ham add tra ve gia tri, nen result se nhan gia tri do

printf("%d", result);
    return 0;
}*/

//FUNCTION PROTOTYPES //khai bao ham truoc khi su dung
void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool agecheck(int age){
    return age >= 18; //tra ve gia tri true neu age >= 18, false neu age < 18
}

int main()
{
    hello("DWhy", 18);
    if(agecheck(18)){
        printf("Ban da du tuoi de tham gia\n");
    } else {
        printf("Ban chua du tuoi de tham gia\n");
    }


    return 0;
}