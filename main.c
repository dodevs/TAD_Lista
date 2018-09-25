#include <stdio.h>
#include "lista.h"

int main() {
  lista_t *lista;
  lista = criaLista();

  insIncLista(lista, 5);
  printf("%d\n",lista->inic->val);
  insIncLista(lista, 3);
  printf("%d\n",lista->inic->val);
  printf("%d\n",lista->inic->prox->val);

  return 0;
}
