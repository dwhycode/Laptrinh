#include<stdio.h>

//Pointers (Con trỏ)
/*void bday(int* age);
int main(){
    int age = 25;
    int *pAge = &age; // *: Dùng để báo hiệu đây là một con trỏ.

    bday(&age);

   printf("You are %d years old",age);


    return 0;
}
void bday(int* age){
    (*age)++;
}

//Malloc:
//Xin cấp phát một vùng nhớ (nhưng không xóa dữ liệu rác cũ đang có trong vùng nhớ đó).
#include<stdlib.h>
int main(){

    int number = 0; 
  
    printf("enter the number of grade:");scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));


    if(grades == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0; i < number; i++){
        printf("enter grade #%d:", i+1);
        scanf(" %c",&grades[i]);
    }
    for(int i=0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); //giải phóng (thu hồi) vùng nhớ mà con trỏ grade đang quản lý
    grades = NULL;

    return 0;
}//Chương trình này dùng để nhập và in ra một danh sách các "điểm chữ" (ví dụ: A, B, C, D, F) với số lượng do chính người dùng quyết định ngay lúc chạy chương trình, thông qua kỹ thuật Cấp phát bộ nhớ động.

 
//malloc: Khi xin vùng nhớ, nó chỉ khoanh vùng và giao cho bạn. Nếu trong vùng nhớ đó có dữ liệu cũ (rác) của các chương trình khác để lại, malloc mặc kệ.
//calloc: Khi xin vùng nhớ, nó sẽ đi qua từng ô nhớ và gán tất cả các giá trị bằng 0 trước khi giao cho bạn.
    //CALLOC:
#include<stdlib.h>
int main(){
 int number = 0;
 printf("Enter the number of players:"); scanf("%d",&number);

 int *sc = calloc(number, sizeof(int));

 if(sc == NULL){
    printf("Memory allocation failed!");
 return 1;
 }

for(int i = 0 ; i < number ; i++){
    printf("Enter score: #%d: ", i+1);
    scanf("%d",&sc[i]);
}

for(int i = 0; i < number; i++){
  printf("%d ", sc[i]);  
}

free(sc);
sc = NULL;
return 0;
}


//REALLOC
//Chức năng:Thay đổi kích thước của một vùng nhớ đã được cấp phát trước đó (bằng malloc hoặc calloc).
#include<stdlib.h>
int main(){
    int number = 0;
    printf("Enter the number:"); scanf("%d",&number);

    float *pr =  malloc(number * sizeof(float));

if(pr == NULL){
    printf("dulieu loi\n");
    return 1;
}

for(int i = 0; i < number; i++){
    printf("Nhap gia #%d:",i+1);
    scanf("%f",&pr[i]);
}

int newso = 0;
printf("Nhap so moi cua gia:"); scanf("%d",&newso);

float *temp = realloc(pr, newso * sizeof(float));

if(temp == NULL){
    printf("Khong nen realloc bonho");
}
else {
    pr = temp;
    temp = NULL;

    for(int i = number; i < newso; i++){
        printf("Nhap gia #%d: ",i+1);
        scanf("%f",&pr[i]);
    }

    for(int i = 0; i < newso; i++){
        printf(" %.2f",pr[i]);
    }

    
}


    free(pr);
    pr = NULL;

    return 0;
}*/


// DIGITAL CLOCK (lam dong ho)
#include<stdbool.h>
#include<unistd.h>
#include<windows.h>
#include<time.h>
int main(){

    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool Run = true;

    printf("DIGITAL CLOCK\n");

    while(Run){
    time(&rawtime);
    pTime = localtime(&rawtime);
    printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
    sleep(1);
    }
return 0;
}
