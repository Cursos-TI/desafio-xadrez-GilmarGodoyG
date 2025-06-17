#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio> 

 int main(){
   printf(" Torre\n");
   printf(" DIREITA ");
   for (int i = 1; i <= 5 ; i++){
      printf("%d  ",i );
     
   }
  // printf("\nBAIXO");
  // printf("\n" );
  // for (int i = 1; i <= 5 ; i++){
  //   printf("");
  //    printf("%d\n",i );
     
 //  }
 printf("\n\n Bispo \n ");
  for (int i = 5; i >= 1; i--) {
       
        for (int j = 1; j < i; j++) {
            printf("   "); 
        }
        printf("     %d\n", i); 
    }
    printf ("CIMA \n     DIREITA ");
    printf ("\n Rainha \n ");
    for (int i = 8; i >=1 ; i--){
      printf(" %d  ",i );
  }
    printf(" ESQUERDA ");
 }
   
 