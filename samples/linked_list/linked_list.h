#include <stdio.h>
#include <stdlib.h>

const int HASHSIZE = 10;

typedef struct info
{
  char* name;
  char* defn;
} Info;

typedef struct List
{
  Info info;
  struct List* prox;
} List;

List* append(List* list, char* name, char* defn) {
  List* aux;
  aux->info.name = name;
  aux->info.defn = defn;
  aux->prox = list;
  return aux;
}

void printList(List* head) {
  List* aux = head;

  while(aux != NULL) {
    printf("(%s , %s) -> ", aux->info.name, aux->info.defn);
    aux = aux->prox;
  }
}

unsigned int hash(char *s) {
  unsigned int hashval;
  for(hashval = 0; *s; s++) {
    hashval = *s + 31 * hashval;
  }
  return hashval % HASHSIZE;
}