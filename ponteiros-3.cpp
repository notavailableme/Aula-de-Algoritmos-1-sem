#include <stdio.h>

int main(){
    int v[5];       //vetor de 5 inteiros
    int *p = v;     //ponteiro aponta pro inicio do vetor
    
    //leitura dos valores
    printf("Digite 5 valores: "\n);

    for(int i = 0; int < 5; i++){
        scanf("%d", &v[i]);//le normalmente o vetor
    }

    //impressão usando apenas o ponteiro
    prinf("Valores digitados:\n");
    for(int i = 0; i < 5; i++){
        printf("%d", *(p+i));//*(p+i) acessa o elemento i do vetor
    }
    printf("\n");
    return 0;
}