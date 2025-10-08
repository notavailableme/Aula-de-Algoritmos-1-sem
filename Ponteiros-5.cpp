#include<stdio.h>

int main(){
    FILE *arquivo = fopen("dados.txt", "w"); //cria arquivo

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");

        return 0;
    }

    fprint(arquivo, "Nome: Maria\nIdade: 25\nCidade: Recife\n");
    fclose(arquivo);
    printf("Arquivo criado e dados gravados com sucesso!\n");
}