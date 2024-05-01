#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void){
    //Variáveis
    char letra, fila[7] = {'G','F','E','D','C','B','A'};
    int cadeira, fileira, num, toupper(int ch);

    //Interface
    do{
        //Limpa tela
        system("cls");
        printf("\n-=-=-= Bem vindo ao cinema =-=-=-\n\n");
        for(fileira = 0; fileira < 7; fileira++){
            for(cadeira = 1; cadeira < 7; cadeira++){
                if(num == cadeira && letra == fila[fileira]){
                    printf(" [--] ");
                }
                else{
                    printf(" [%c%d] ",fila[fileira],cadeira);
                }
            }
            printf("\n");
        }
        printf("\n.-------------- TELA --------------.\n\n");

        //Escolha de assento
        printf("\nEscolha um assento: ");
        scanf("%c""%d",&letra,&num);
        letra = toupper(letra);

    }while(num != 0);
}
