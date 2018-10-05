#ifndef _NO_H
#define _NO_H

typedef struct no no_t;

/* SETTERS */
void no_setProx(no_t *no, no_t *prox);
void no_setAnt(no_t *no, no_t *ant);
void no_setVal(no_t *no, int val);
/* SETTERS */

/* GETTERS */
no_t *no_getProx(no_t *no);
no_t *no_getAnt(no_t *no);
int no_getVal(no_t *no);
/* GETTERS */

no_t * criaNo(int v);

void destroiNo(no_t *no);

int consultaNo(no_t *no);

#endif /*_NO_H*/
