#include <stdlib.h>
#include "no.h"

no_t * criaNo(int v) {
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
