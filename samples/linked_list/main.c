#include "linked_list.h"

int main(void) {

  List* hashtab[10];
  int n;
  
  for(int i = 0; i < 10; i++) hashtab[i] = NULL;

  printf("Digite a quantidade de pares que deseja inserir: ");
  scanf("%d\n", &n);

  for(int i = 0; i < n; i ++) {
    char* name;
    char* defn;

    gets(name);
    printf("NAME =  %s", name);
    
    gets(defn);
    printf("%s", defn);

    int position = hash(name);

    printf("position = %d", position);
    // append(hashtab[position], name, defn);
  }

  // for(int i = 0; i < 10; i++) {
  //   printf("[%d] = ");
  //   printList(hashtab[i]);
  //   printf("NULL\n");
  // }

}