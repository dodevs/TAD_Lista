#include "no.h"

typedef struct lista lista_t;

struct lista {
  no_t *inic;
  no_t *fim;
  int tam;
};

lista_t * criaLista();

void insIncLista(lista_t *l, int v);
