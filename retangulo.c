/*
 * Trabalho 2 de programação de computadores I - Retangulo
 * Curso de sistemas da informação 
 *Aluno: Victor Lira - Matricula 0050013137
 * Professor: Alex Salgado
*/


#include <stdio.h>

int main(){ 
int x=0, y=0; 
int i,j; 


printf("Introduza uma altura""\n");
scanf("%d",&x);

printf("Introduza uma largura""\n");
scanf("%d",&y);
printf ("Olá, meu nome e Victor e o retangulo ficou assim:" "\n");

for(j=0; j< x; j++){
  
  for(i=0; i < y; i++){
    printf("*");
    

  }
  printf("\n");

}

return 0; 
}