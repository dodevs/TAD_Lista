#ifndef _LISTA_H
#define _LISTA_H

#include "no.h"

typedef struct lista lista_t;

/* SETTERS */
void lista_setInic(lista_t *l, no_t *inic);
void lista_setFim(lista_t *l, no_t *fim);
void lista_setTam(lista_t *l, int tam);
/* SETTERS */

/* GETTERS */
no_t *lista_getInic(lista_t *l);
no_t *lista_getFim(lista_t *l);
int lista_getTam(lista_t *l);
/* GETTERS */

lista_t * criaLista();

void inserirNoInicio(lista_t *l, int v);

void inserirNoFinal(lista_t *l, int v);

void destroiLista(lista_t *l);

int tamanhoLista(lista_t *l);

#endif /*_LISTA_H*/
