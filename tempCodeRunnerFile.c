#include <stdio.h>
#include <string.h>
#include <ctype.h>
    int main () 
    {
      char ht[150];
             printf ("\nNhap vao ho ten:");
      fgets(ht,150,stdin);
       ht[strcspn(ht, "\n")] = '\0';
    // tÃ¡ch há» ra khá»i tÃªn ;
         printf ("\nHo:");
         int i = 0 ;
         while ( ht[i]  != ' ')
         
         {
            i++;
         };
         for ( int k =  0 ;  k < i ; k++ )
         {
            printf ("%c",ht[k]);
         };
         // tÃ¡ch tÃªn;
         printf ("\nTen:");
         int j = strlen(ht)-1;

            while (ht[j] !=' ')
            {
                j--;
            };

            
            for (int k= j +1 ; k <strlen(ht);k++)
            {
                printf ("%c",ht[k]);
            }

        // tÃ¡ch chá»¯ lÃ³t ;
        printf ("\nchu lot:");
         for (int k = i + 1 ; k < j ; k++)
         {
            printf("%c",ht[k]);
         }

        return 0 ;
    }