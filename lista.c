#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
#include "no.h"

struct lista {
  no_t *inic;
  no_t *fim;
  int tam;
};

/* SETTERS */
void lista_setInic(lista_t *l, no_t *inic) {
  l->inic = inic;
}

void lista_setFim(lista_t *l, no_t *fim) {
  l->fim = fim;
}

void lista_setTam(lista_t *l, int tam) {
  l->tam = tam;
}
/* SETTERS */

/* GETTERS */
no_t *lista_getInic(lista_t *l) {
  return l->inic;
}

no_t *lista_getFim(lista_t *l) {
  return l->fim;
}

int lista_getTam(lista_t *l) {
  return l->tam;
}
/* GETTERS */

lista_t * criaLista() {
  lista_t *l;
  l = (lista_t *)malloc(sizeof(lista_t));
  l->inic = l->fim = NULL;
  l->tam = 0;

  return l;
}

void inserirNoInicio(lista_t *l, int v) {
  no_t *no = criaNo(v);
  no_setProx(no,l->inic);
  l->inic = no;
  l->tam++;
  if(l->tam == 1)
    l->fim = no;
}

void inserirNoFinal(lista_t *l, int v) {
  no_t *no = criaNo(v);

  if(l->tam > 0) {
    no_t *noF = l->fim;
    l->fim = no;
    no_setAnt(no, noF);
    no_setProx(noF, no);
  }else {
    l->inic = no;
    l->fim = no;
  }
  l->tam++;
}

void inserirNaPosicao(lista_t *l, int pos, int val) {
  if(pos == 0){
    inserirNoInicio(l,val);
  }else if(pos == l->tam) {
    inserirNoFinal(l, val);
  }else{
    no_t *ant = lista_getInic(l);
    no_t *no = criaNo(val);

    int count = 1;
    while(no != NULL && pos != count) {
      ant = no_getProx(ant);
      count++;
    }
    no_setProx(no, no_getProx(ant));
    no_setAnt(no, ant);
    no_setProx(ant, no);
    no_setAnt(no_getProx(no), no);
    l->tam++;
  }
}

void destroiLista(lista_t *l) {
  no_t *no = l->inic;
  while(no != NULL) {
    no_t *prox = no_getProx(no);
    destroiNo(no);
    no = prox;
  }
  free(l);
}

int tamanhoLista(lista_t *l) {
  return l->tam;
}

void imprimeLista(lista_t *l) {
  no_t *no = l->inic;
  while(no != NULL) {
    if(no_getProx(no) != NULL)
      printf("%d <-> ", no_getVal(no));
    else
      printf("%d\n", no_getVal(no));
    no = no_getProx(no);
  }
}
