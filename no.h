typedef struct no no_t;

struct no {
  no_t *prox;
  no_t *ant;
  int val;
};

no_t * criaNo(int v);

void destroiNo(no_t *no);

int consultaNo(no_t *no);
