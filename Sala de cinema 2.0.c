#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Função que mostra as cadeiras
void cadeiras(char letra, int num){
    //Variáveis
    int cadeira, fileira, cont;
    char fila[4] = {'D','C','B','A'}, lugares[1000][2];

    //Tentativa de armazenar vários assentos em uma só variável 
    cont = 0;
    lugares[cont][0] = letra;
    lugares[cont][1] = num;
    
    //Laço de repetição
    for (fileira = 0; fileira < 4; fileira++){
        for (cadeira = 1; cadeira < 5; cadeira++){
            if (lugares[cont][0] == fila[fileira] && lugares[cont][1] == cadeira)
                printf (" [--] ");
            else
                printf (" [%c%d] ",fila[fileira],cadeira);
        }
        printf ("\n");
    }
    cont++;
}

//Função principal
int main(void){
    //Variáveis
    char pergunta, letra;
    int num, toupper(int ch);

    //Loop
    while (pergunta != 'N'){
        system ("cls");
        printf (" -=-=-= Bem-vindo ao cinema =-=-=-\n");

        //Chamada da função
        cadeiras (letra,num);

        //Usuário escolhe a cadeira
        printf ("Escolha seu lugar: ");
        scanf ("%c%d",&letra,&num);
        letra = toupper(letra);

        //Condição para escolher somente cadeiras disponíveis
        if ((letra != 'A' && letra != 'B' && letra != 'C' && letra != 'D') || (num <= 0 || num >= 5)){
            printf("Erro! Assento indisponivel ou inexistente. Por favor tente novamente.\n");
        }
        cadeiras (letra,num);
        getchar ();

        //Condição de repetição
        printf ("Deseja escolher mais uma cadeira? [S/N] ");
        scanf ("%c",&pergunta);
        pergunta = toupper(pergunta);
        getchar ();
    }
    //Fim do programa
    printf("\nObrigado por escolher nosso servico. Bom filme!");
}
// Ainda não consegui armazenar todas as entradas do usuário, a ideia é ir retirando os assentos já escolhidos, não somente o último.
// Linha 49 - fazer um do while para verificar as cadeiras disponíveis e repetir a pergunta até ter uma resposta correta.