#include "linked_list.h"

int main(void) {

  List* head;
  head = NULL;

  for(int i = 0; i < 5; i++) {
    head = append(head, i);
  }

  // printf("list head: %d\n", head->info.x);

  printList(head);

}