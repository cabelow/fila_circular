#define MAX 100
typedef struct fila {
int ini;
int fim;
int tamanho;
float vet[MAX];
} Fila;


Fila* fila_cria (void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini= 0; //ini comeca 0
    f->fim = -1; // comeca com -1 pra usar o tamanho max
    return f;
}// fila_cria

int fila_vazia (Fila* f){
    return (f->ini == f->fim);
}

int fila_cheia (Fila* f){
    if(f->fim == -1) return 0;
    else return (fila_tamanho(f) == MAX);
}

int incr(int indice){
    return (indice + 1) % MAX;
}

void fila_inserir (Fila* f){
    //testa fila cheia
    if (fila_cheia(f)) {
        printf("\nFila cheia");
        exit(1);
    }

    //cria espaço temporario
    float v;
    printf("\nDig valor");
    scanf("%f", &v);

    // atualiza o fim
    f->fim = incr(f->fim); //atualia o cricular
    f->vet[f->fim] = v; //colocar valor na fila
    printf("\n AQUI MEU VALOR : %f ------------", f->vet[f->fim]);
    printf("\nInserido o valo: %f foi colocado na %d da fila \n", v, f->fim);
    //f->fim++; //atualza o fim

}

float fila_retirar (Fila* f){
    float v;
    //testa vaiza
    if (fila_vazia(f)){
        printf("Fila vazia.\n");
        exit(1);
    }
    // atualiza o inicio
    v = f->vet[f->ini];
    //f->ini++;
    f->ini = incr(f->ini);
    return v;
}

float fila_primeiro (Fila* f){
    float v;
    //testa vaiza
    if (fila_vazia(f)){
        printf("Fila vazia.\n");
        exit(1);
    }
    // atualiza o inicio
    v = f->vet[f->ini];
    //printf("\nPrimeiro: %.2f", v);
    //f->ini++;
    //f->ini = incr(f->ini);
    return v;
}

int fila_tamanho (Fila* f){
    return (MAX - f->ini + f->fim) % MAX +1;
}

void fila_libera (Fila* f){free(f);}

void fila_print(Fila* f){
    printf("\n\n -------------------- Fila print ------------------- \n");
    int tamanho, i;
    tamanho = fila_tamanho(f)-1;
    for(i=-1; i<=tamanho; i++) { printf("\nposicao %i : %.2f", i+1
                                        , f->vet[i]); }
    //printf("%.2f", f->vet[1]);
}

void fila_parImpar(Fila* f){
    printf("\n\n -------------------- Fila print ------------------- \n");
    int tamanho, i, v;
    int par=0, impar=0;
    tamanho = fila_tamanho(f)-1;
    for(i=0; i<=tamanho; i++) {
        v = f->vet[i];
        if(v % 2== 0) par++;
        else impar++;
    }
    //printf("%.2f", f->vet[1]);
    printf("\nPar = %d \nImpar = %d ", par, impar);
}


void fila_fura (Fila* f){
    //testa fila cheia
    if (fila_cheia(f)) {
        printf("\nFila cheia");
        exit(1);
    }

    //cria espaço temporario
    float v;
    printf("\nDig valor");
    scanf("%f", &v);

    // atualiza o fim
    f->vet[f->ini-1] = v; //colocar valor na fila
    printf("\n AQUI MEU VALOR : %.2f ------------", f->vet[f->fim]);
    printf("\nInserido o valo: %.2f foi colocado na %d da fila \n", v, f->fim);
    //f->fim++; //atualza o fim
    f->ini-- ; //= incr(f->ini-1); //atualia o cricular
}
