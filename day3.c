#include<stdio.h>
#include<math.h>
int main ()
{
    // TEMPERATURE CONVERSION PROGRAM //
    char choice = '\0';
    float fahrenheit = 0.0f; //chuong trinh chuyen doi nhiest do
   float celsius = 0.0f; // chuong trinh chuyen doi nhiet do

   printf("Chuong trinh chuyen doi nhiet do\n");
   printf("C. Chuyen doi tu Celsius sang Fahrenheit\n");
   printf("F. Chuyen doi tu Fahrenheit sang Celsius\n)");
   printf(" Nhap lua chon (C hoac F): "); scanf("%c", &choice);
   
   if(choice == 'C'){
    printf("Nhap so do Celsius can chuyen doi:"); scanf("%f", &celsius);
   }
   else if(choice == 'F'){
    printf("Nhap so do Fahrenheit can chuyen doi:"); scanf("%f", &fahrenheit);
   }
   else{
    printf("Gia tri chon khong co, nhap C hoac F");
   }
    return 0;
}