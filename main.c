#include<stdio.h>
#include <stdlib.h>
#include "fila_circular.h"
int main(){
    Fila *f;

    int loop=1;
    int r; //receber retornos
    float v; //receber valores quando retirar da fila
    while(loop){
        printf("\nEscolha: ");
        printf("\n 0: Sair ");
        printf("\n 1: Inicializa ");
        printf("\n 2: Vazia ");
        printf("\n 3: Cheia");
        printf("\n 4: Enfilerar");
        printf("\n 5: Desenfilerar ");
        printf("\n 6: Ler o primeiro");
        printf("\n 7: Tamanho");
        printf("\n 8: Furar a Fila");
        printf("\n 9: Imprimir \n");

        int op;
        scanf("%d", &op);
        switch(op){
        case 0:
            loop =0;
            fila_libera(f);
            break;
        case 1:
            f = fila_cria(f);
            if(f == "") printf("\nFila nao criada");
            else printf("\nCriada com sucesso");
            break;
        case 2:
            r = fila_vazia(f);
            if(r) printf("\nVazia");
            else printf("\nNao Vazia");
            break;
        case 3:
            r = fila_cheia(f);
            if(r) printf("\nCheia");
            else printf("\nTem espaco");
            break;
        case 4:
            fila_inserir(f);
            break;
        case 5:
            v = fila_retirar(f);
            printf("\nO %f foi retirado", v);
            break;
        case 6:
            v = fila_primeiro(f);
            printf("\nO %.2f e o primeiro da fila", v);
            break;
        case 7:
            printf("\nTamanho: %d", fila_tamanho(f));
            break;
        case 8:
            fila_fura(f);
            break;
        case 9:
            fila_print(f);
            break;
        case 10:
            fila_parImpar(f);
            break;
        }//fim caso
    }//fim loop



    //fila_inserir(f, 30);
    //printf("Valores na fila %f ", fila_retirar(f));

return 0;
}
