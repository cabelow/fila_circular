typedef struct fila Fila;

Fila* fila_cria();

void fila_libera(Fila* f);

void fila_inserir(Fila* f);

float fila_retirar(Fila* f);

int fila_vazia(Fila* f);

int fila_cheia(Fila* f);

int fila_tamanho(Fila* f);

void fila_print(Fila* f);
