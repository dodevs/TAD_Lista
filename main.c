#include <stdio.h>
#include "lista.h"

int main() {
  lista_t *lista;
  lista = criaLista();

  inserirNoInicio(lista, 5);
  printf("%d\n", no_getVal(lista_getInic(lista)));
  inserirNoInicio(lista, 3);
  printf("%d\n", no_getVal(lista_getInic(lista)));
  printf("%d\n", no_getVal(no_getProx(lista_getInic(lista))));

  return 0;
}
