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

void inserirNoInicio(lista_t *l, int v) {
  no_t *no = criaNo(v);

  if(l->tam > 0){
    no_t *x = l->inic;
    x->ant = no;
    no->prox = x;
    l->inic = no;
  }else{
    l->inic = no;
    l->fim = no;
  }

  l->tam++;
}

void inserirNoFinal(lista_t *l, int v) {
  no_t *no = criaNo(v);

  if(l->tam > 0) {
    no_t *noF = l->fim;
    l->fim = no;
    no->ant = noF;
    noF->prox = no;
  }else {
    l->inic = no;
    l->fim = no;
  }
  l->tam++;
}
