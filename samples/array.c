#include <stdio.h>
#include <stdlib.h>

#define ull unsigned long long

ull** cria2D (int nLinhas, int nColunas) {

  ull **vetor2D = (ull **) malloc((nLinhas * nColunas) * sizeof(int));

  printf("size of = %d\n", sizeof(**vetor2D));

  ull count = 0;

  ull *ptr = **vetor2D;

  for (int i = 0; i < nLinhas; i++) {
    for (int j = 0; j < nColunas; j++) {
      vetor2D[i][j] = count;
      printf("count = %d || vetor2D[%d][%d] = %d\n", count, i, j, vetor2D[i][j]);
      count++;
    }
    printf("\n");
  }


  return vetor2D;
}

void print(ull **vetor2D, int nLinhas, int nColunas) {
  for (int i = 0; i < nLinhas; i++) {
    for (int j = 0; j < nColunas; j++) {
      printf("%d ", vetor2D[i][j]);
    }
    printf("\n");
  }
}

int main () {

  printf("Helloooo\n");
  ull **matriz = cria2D(10, 10);
  // print(&matriz, 10, 10);

  return 0;
}