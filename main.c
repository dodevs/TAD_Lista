#include <stdio.h>
#include "lista.h"

int main() {
  lista_t *lista;
  lista = criaLista();

  insIncLista(lista, 5);
  printf("%p\n", (void *)lista->inic->prox);
  insIncLista(lista, 3);
  printf("%p\n", (void *)lista->inic->prox);
  
  return 0;
}
