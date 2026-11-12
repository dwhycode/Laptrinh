#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>


#include<time.h>// RAMDOM NUMBERS
#include <stdlib.h>
//BREAK(dung)&& CONTINUE (bo qua dkien va tiep tuc)

int main(){

    for(int i=1; i<=10; i++){
        if(i == 4){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}


            //nested loops vong lap long nhau

    int main(){
         for(int i=1; i < 4 ; i++){ //vonglap nay chay toi so lan i<n
            for(int j = 1; j < 10; j++){
                printf("%d ", j);

            }
        printf("\n");
        }
        return 0;
    }

//bcchuong vonglap lientuc
    int main(){

        for(int i=1; i<=10; i++){    
            for (int j = 1; j <=10; j++){
                printf("%3d ", i * j);
        }
        printf("\n");
    }
    return 0;
}

//ex: nhap so dong co de in ra ki tu
int main(){
 int rows= 0;
 int columns = 0;
 char symbol = '\0';

 printf("Enter the # of rows: "); scanf("%d", &rows); //nhap so dong
 printf("Enter the # ofss columns:"); scanf("%d", &columns); //nhap so cot
 printf("Enter the # of symbol:"); scanf(" %c",&symbol);

  for (int i = 0 ; i < rows; i++){
    for(int i = 0; i < columns; i++){
        printf("%c", symbol);
    }
    printf("\n");
}


    return 0;
}


//RAMDOM NUMBERs //ctrinh tu nhap so ngau nhien 
int main(){

    srand(time(NULL));

    printf("%d", rand());
    int radomNum = rand() % 2;
    
    printf("%d", randomNum);

    return 0;
}


int main(){
    int max = 50, min = 100;
  srand(time(NULL));

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum1,randomNum2,randomNum3);

    return 0;
}



int main(){ //NUMBER GUESSING GAME(Trò chơi đoán số) ramdom so
    srand(time(NULL));

    int guess = 0; 
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;
    
    printf("GAME NGAU NHIEN");
    do{
        printf("Guess a number between %d - %d: ", min,max);
        scanf("%d", guess);
        tries++;

        if(guess < answer){
            printf("TOO LOW\n");
        }
         else if(guess > answer){
            printf("TOO HIGH\n");
        }
         else {printf("CORRECT\n");}
    }while(guess != answer);

    printf("The answer is %d\n", answer);
    printf("It took you %d tries", tries);

return 0;
}