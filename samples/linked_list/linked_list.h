#include <stdio.h>
#include <stdlib.h>

typedef struct info
{
  int x, y;
} Info;

typedef struct List
{
  Info info;
  struct List* prox;
} List;

List* append(List* list, int value) {
  List* aux;
  aux = (List*)malloc(sizeof(List));
  aux->info.x = value;
  aux->info.y = value;
  aux->prox = list;
  return aux;
}

void printList(List* head) {
  List* aux = head;

  while(aux != NULL) {
    printf("(%d , %d)\n", aux->info.x, aux->info.y);
    aux = aux->prox;
  }
}