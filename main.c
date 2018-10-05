#include <stdio.h>
#include "lista.h"

int main() {
  lista_t *lista;
  lista = criaLista();

  inserirNoInicio(lista, 2);
  inserirNoFinal(lista, 4);
  inserirNoInicio(lista, 1);
  /*(lista_t *lista, int posicao, int valor)*/
  inserirNaPosicao(lista, 2, 3);
  inserirNaPosicao(lista, 0, 0);
  inserirNaPosicao(lista, 5, 5);
  imprimeLista(lista); /* retorno esperado: 0 <-> 1 <-> 2 <-> 3 <-> 4 <-> 5 */
  destroiLista(lista);
  return 0;
}
