#include <stdio.h>
#include <math.h>
 int main()
 {
     float a=0;
     float p=0;
     float imc=0;
    
     /* codigo basico para calculo de imc
     */
     
    printf("\n Qual a sua altura:");
        scanf("%f", &a);
    printf("\n Qual o seu peso:");
        scanf("%f", &p);
        
   imc=p/(a*a);
   printf("imc:%f",imc);
    
    if(imc<=19)
        printf("\n Sua massa corporal e magra!");
    if((imc>=20)&&(imc<=25))
        printf("\n Sua massa corporal e ideal!");
    if((imc>=26)&&(imc<=30))
        printf("\n Sua massa corporal esta em sobre peso!");
    if((imc>=31))
        printf("\n Voce esta com sobre peso, Cuidado!");
        

   return 0;
 }
