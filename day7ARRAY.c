#include<stdio.h>
#include<math.h>

    //ARRAY (mảng) a[i]
int main(){//int a[]= 0 tuong minh; int a[3][5]= mang 2 chieu(hang,cot)
    int number[] = {10, 20, 30, 40, 50,60};
    char grade[] = {'A','B','C','D','F'};
    char name[] = "DWhy";

   int size = sizeof(number) / sizeof(number[0]);


    for(int i = 0; i < size; i++){
        printf("%d ",number[i]);
    }
    return 0;
}

//ARRAY EX: mang tuong minh
int main(){
int diem[5] = {0};

    for(int i=0; i<5;i++){//nhap so theo vong lap
        printf("Nhap diem vao:");scanf("%d",&diem[i]);
    }
    for(int i=0; i<5;i++){
        printf("%d ",diem[i]); //xuat dulieu da nhap ra
    }

    return 0;
}

            //2D ARRAY: mang 2 chieu 
int main (){
    int so[][3]={{1, 2, 3}, 
                 {4, 5, 6}, 
                 {7, 8, 9},
                {10, 11, 12}};

for(int i=0; i < 4; i++){// dong`
    for(int j=0; j < 3; j++){// cot
        printf("%d ",so[i][j]);
    }
    printf("\n");
}
    return 0;
}

//EX DIEN THOAI:    array[][] = {{}, {}, {}};
int main(){
    char so[][3]={{'1','2','3'},
                  {'4','5','6'},
                  {'7','8','9'},
                  {'*','0','#'}};

    for(int i=0; i<4; i++){ //hang`
        for(int j=0; j<3; j++){ //cot
            printf("%c ",so[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//ARRAY OF STRINGS EX
//Cho phép người dùng nhập vào 4 cái tên từ bàn phím, sau đó in ngược lại 4 cái tên đó ra màn hình một cách gọn gàng.
#include<string.h>
int main(){
char names[4][25]={0};
int rows = sizeof(names) / sizeof(names[0]);
//Tự động tính toán số lượng phần tử (số hàng) của mảng names và lưu kết quả đó vào biến rows

for(int i=0; i < rows; i++){
    printf("Vui long nhap ten:");
    fgets(names[i], sizeof(names[i]), stdin);
    names[i][strlen(names[i]) - 1] = '\0';
}
for(int i=0; i < rows; i++){
    printf("%s\n",names[i]);

}
    return 0;
}

