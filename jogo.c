#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int Tentativa = 1, Segredo, Palpite;
    srand( time(NULL) );
    Segredo = rand() % 101;
    while (Tentativa <= 10){
        printf("Digite um numero entre 0 e 100: ");
        scanf("%d",&Palpite);
        if(Palpite < 0 || Palpite > 100 ){
            continue;
        }            
         else{
            if(Palpite == Segredo){
                printf("Parabéns, voce acertou em %d tentativas!\n",Tentativa);
                return 0;
            } else if (Palpite < Segredo){
                printf("Meu numero eh maior\n");
            } else if (Palpite > Segredo){
                printf("Meu numero eh menor\n");
            }
        }
        Tentativa = Tentativa + 1;
    }
    printf("Extrapolou as 10 tentativas!\n");
    printf("O Numero era %d\n",Segredo);
    return 0;
}