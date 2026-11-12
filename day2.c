#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h> //thư viện để sử dụng kiểu dữ liệu boolean (true/false)

//Circle calculator program //chương trình tính toán hình tròn và hình trụ
{
    double radius = 0.0, area = 0.0; //ban kinh va dien tich hinh tron
    double surfacearea = 0.0; //dien tich xung quanh hinh tru
    double volume = 0.0;
    const double PI= 3.14159;

    printf("Nhap ban kinh hinh tron:"); scanf("%lf",&radius);

    area = PI * pow(radius, 2); //dien tich hinh tron = pi * r^2
    surfacearea = 4 * PI * pow(radius, 2); //dien tich xung quanh hinh tru = 4 * pi * r^2
    volume= (4.0/3.0) * PI * pow(radius, 3); //the tich hinh tru = (4/3) * pi * r^3 
    
    printf("Dien tich hinh tron la: %.2lf\n", area);
    printf("Dien tich xung quanh hinh tru la: %.2lf\n", surfacearea);
    printf("The tich hinh tru la: %.2lf", volume);
    return 0;
}

{
    //COMPOUND INTEREST CALCULATOR PROGRAM //chương trình tính toán lãi kép
    double principal = 0.0; //số tiền gốc
    double rate = 0.0; //lãi suất
    int years =0;   //số năm
    int timesCompounded = 0;    //số lần lãi được tính trong một năm
    double total = 0.0; //tổng số tiền sau khi tính lãi kép

    printf("Chuong trinh tinh toan lai kep\n");
    printf("Nhap so tien goc:");
    scanf("%lf", &principal);//nhập số tiền gốc

    printf("Nhap lai suat (duoi dang thap phan, vi du 0.05 cho 5%%):");
    scanf("%lf", &rate); //nhập lãi suất dưới dạng thập phân
    rate = rate/100;
    printf("Nhap so nam:"); scanf("%d",&years);
    printf("Nhap so lan lai duoc tinh trong 1 nam:"); scanf("%d",&timesCompounded);

    total= principal * pow(1 + rate / timesCompounded, timesCompounded * years); //tính tổng số tiền sau khi tính lãi kép
    printf("Tong so tien sau khi tinh lai kep la: %.2lf", total);
   
    return 0;
}

{
    //IF EXAMPLE            //ví dụ về câu lệnh if
    int age = 0; //câu lệnh luôn nên để từ lớn về nhỏ để dễ làm ra kết quả

    printf("Nhap tuoi cua ban:"); scanf("%d",&age);

    if(age >= 65){
        printf("Ban la nguoi gia.\n");
    }
    else if (age >= 18){
        printf("Ban la nguoi truong thanh.\n");
    }
    else if(age > 0 && age < 18){
        printf("Ban la 1 dua tre con.\n");
    }
    else if( age == 0){
        printf("Ban vua duoc sinh ra.\n");
    }
    else{
        printf("Ban chua duoc sinh ra.\n");
    }
    
    

    return 0;
}

//true&false
{
    bool hocsinh= true;
    if(hocsinh){
        printf("Ban la hoc sinh.\n");
    }
    else{
        printf("Ban khong phai la hoc sinh.\n");
    }


    return 0;
}

#include<string.h>
{
    char ten[50]=""; //khai báo một mảng ký tự để lưu tên
    printf("Nhap ten cua ban:");
    fgets(ten, sizeof(ten), stdin); //đọc tên từ bàn phím, bao gồm cả khoảng trắng
    ten[strcspn(ten, "\n")] = '\0'; //loại bỏ ký tự newline nếu có

    if (strlen(ten) == 0){
        printf("Ban chua nhap ten.\n");
    }
    else{
        printf("Ten cua ban la: %s", ten);
    }

    return 0;
}

//WEIGHT CONVERTER PROGRAM //chương trình chuyển đổi trọng lượng
int main(){
int choice =0; //biến để lưu lựa chọn của người dùng
float pounds = 0.0f, kilograms = 0.0f;

printf("Chuong trinh chuyen doi trong luong\n");
printf("1. Chuyen doi tu pounds sang kilograms\n");
printf("2. Chuyen doi tu kilograms sang pounds\n");
printf("Nhap lua chon cua ban (1 hoac 2):"); scanf("%d",&choice);
    
if(choice ==1){
    //chuyển đổi từ pounds sang kilograms
    printf("Nhap so pounds can chuyen doi:"); scanf("%f",&pounds);
    kilograms = pounds / 2.20462; //chuyển đổi từ lb sang kg
    printf("Trong luong cua ban la: %.2f kg", kilograms);
}
else if(choice == 2){
    //chuyển đổi từ kilograms sang pounds
    printf("Nhap so kilograms can chuyen doi:"); scanf("%f",&kilograms);
    pounds = kilograms * 2.20462; //chuyển đổi từ kg sang lb
    printf("Trong luong cua ban la: %.2f lb", pounds);
}
else{
    printf("Lua chon khong hop le.\n");
    return 1; //kết thúc chương trình với mã lỗi
}
return 0;
}