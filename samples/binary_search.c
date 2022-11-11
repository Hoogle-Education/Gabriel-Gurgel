#include <stdio.h>

typedef struct Aluno {
  int ID;
  int idade;
  double nota;
  char nome[200];

} Aluno;

// retorno a posição do que procuro
// se não encontrar retorno -1
int busca_binaria_iterativa(int array[], int size, int target) {
  int start = 0;
  int end = size - 1;

  while(start <= end) {
    int middle = (start + end) / 2;

    if(target == array[middle]) return middle;
    else if(target < array[middle]) end = middle - 1;
    else if (target > array[middle]) start = middle + 1;
  }

  return -1;
}

int busca_binaria_recursiva(int array[], int start, int end, int target) {

  // caso base: deu errado!
  if(start > end) return -1;

  int middle = (start + end) / 2;

  // caso base: encontramos!
  if(target == array[middle]) return middle;

  // caso recursivo
  if(target > array[middle])
    return busca_binaria_recursiva(array, middle + 1, end, target);
  else 
    return busca_binaria_recursiva(array, start, middle - 1, target);

}

int main() {

  Aluno joao;
  joao.idade = 200

  int size = 5;
  int array[] = {2, 4, 6, 8, 10};

  int result = busca_binaria_recursiva(array, 0, size - 1, 10);

  printf("Result = %d\n", result);

  return 0;
}