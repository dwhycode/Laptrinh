#include<stdio.h>
#include<string.h> //C17 khong co thu vien string.h nen khong su dung duoc strlen
#include<math.h> //C17 khong co thu vien math.h nen khong su dung duoc pow
#include<stdbool.h> //C17 khong co thu vien conio.h nen khong su dung duoc get

#include<windows.h>
 //dung de su dung ham Sleep trong windows, thay the sleep trong linux, macOS
 #include<unistd.h>//dung de su dung ham sleep trong linux, macOS




//WHILE LOOPS //vong lap while, lap khi dieu kien con dung
int main()
{//do while nam nguoc nhau
    int number = 0;

    do
    {
        printf("Nhap so lon hon 0:");
        scanf("%d",&number);
    }while(number <= 0);

    return 0;
}



int main() //vong lap while, lap khi dieu kien con dung
{
    char name[50] ="";

    printf("Nhap ten cua ban:");
    fgets(name,sizeof(name),stdin);//fgets de nhap chuoi, sizeof(name) de tranh tran bo nho, stdin de doc tu ban phim
    name[strlen(name)-1]= '\0'; //xoa ki tu xuong dong

    while(strlen(name) == 0){
//strlen(name) de tinh do dai chuoi, neu bang 0 thi ten khong duoc de trong
        printf("Ten khoong duoc de trong, vui long nhap lai:");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]= '\0'; //xoa ki tu xuong dong
    }
    printf("Xin chao, %s!",name);

    return 0;
}*

int main()
{
    bool isRunning = true; //bien boolean de kiem tra dieu kien vong lap
    char response = '\0';//bien char de luu cau tra loi cua nguoi dung

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){//neu cau tra loi khong phai la Y hoac y thi ket thuc vong lap
            isRunning = false;
        }
    }
    printf("You exit the game.");
    
    return 0;
}


    //For loop
int main(){ //vong lap for, lap khi biet truoc so lan lap

    for(int i = 10; i >= 1; i--){ //i la bien dem, bat dau tu 10, lap khi i lon hon 0, moi lan lap thi giam i di 1
        Sleep(1000);//dung de choi game, thay the Sleep trong windows, sleep trong linux, macOS
        printf("%d\n",i);;


    }
    printf("CHUC MUNG NAM MOI");


    return 0;
}


