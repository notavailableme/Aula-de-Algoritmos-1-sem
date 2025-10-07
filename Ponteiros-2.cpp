/*
nome: Gabriel Paiva
Projeto: Estudo de ponteiros em linguagem c++ 
c++ = possivel usar sem sistema
*/

#include <std.io>

int main(){
        int x = 10;//Declara uma variável inteira e atribui valor 10
        int *px;//declara um ponteiro para inteiro
        px = &x;//o ponteiro px recebe o valor de x

        printf("Valor de x (direto): %d\n", x);//acessa o valor diretamente
        printf("Valor de x (via ponteiro): %d\n", *px);//usa o operador *

        printf("Endereço de x: %p\n", &x);
        printf("Endereço guardado em px: %p\n", px);


    return (0);
}