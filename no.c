#include <stdlib.h>
#include "no.h"

struct no {
  no_t *prox;
  no_t *ant;
  int val;
};

/* SETTERS */
void no_setProx(no_t *no, no_t *prox) {
  no->prox = prox;
}

void no_setAnt(no_t *no, no_t *ant) {
  no->ant = ant;
}

void no_setVal(no_t *no, int val) {
  no->val = val;
}
/* SETTER */

/* GETTERS */
no_t *no_getProx(no_t *no) {
  return no->prox;
}

no_t *no_getAnt(no_t *no) {
  return no->ant;
}

int no_getVal(no_t *no) {
  return no->val;
}
/* GETTERS */

no_t *criaNo(int v) {
  no_t *n = (no_t *)malloc(sizeof(no_t));
  n->prox = n->ant = NULL;
  n->val = v;

  return n;
}

void destroiNo(no_t *no) {
  free(no);
}

int consultaNo(no_t *no) {
  return no->val;
}
