#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

lista_t * criaLista() {
  lista_t *l;
  l = (lista_t *)malloc(sizeof(lista_t));
  l->inic = l->fim = NULL;
  l->tam = 0;

  return l;
}

void insIncLista(lista_t *l, int v) {
  no_t *no = criaNo(v);
  l->inic = (no_t *)malloc(sizeof(no_t));
  l->fim = (no_t *)malloc(sizeof(no_t));

  if(l->tam > 0){
    no_t *x = l->inic;
    x->ant = (no_t *)malloc(sizeof(no_t));
    x->ant = no;
    no->prox = (no_t *)malloc(sizeof(no_t));
    no->prox = x;
    l->inic = no;
  }else{
    l->inic = no;
    l->fim = no;
  }

  l->tam++;
}
