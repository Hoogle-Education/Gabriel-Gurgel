#include <stdio.h>
#include <stdlib.h>

void imprimeReverso(char* nomes[], int total) {

  // caso base
  if(total == 0) return;

  puts("da recursiva...");
  char* ultimo = nomes[total-1];
  printf("%s", ultimo);

  // caso recursivo
  return imprimeReverso(nomes, total-1);
} 

int main(void) {

  FILE* nomes_arquivo;

  char *linha;
  linha = malloc(200 * sizeof(char));

  nomes_arquivo = fopen("nomes.txt", "r"); // read mode

  if ( nomes_arquivo == NULL ) {
     puts("Não foi possível achar o arquivo!");
     return 0;
  }

  puts("O arquivo foi aberto!");

  int total = 0;

  // contando a quantidade de nomes do arquivo
  while( fgets(linha, 200, nomes_arquivo) != NULL ){
    total++;
  }

  // r - read
  // w - write
  // r+ / w+ - criar arquivo

  // sufixos
  // a - append
  // b - binary

  // voltando para o começo do arquivo
  nomes_arquivo = fopen("nomes.txt", "r"); 

  char* nomes[total];

  for(int i = 0; i < total; i++) {
    nomes[i] = malloc(200*sizeof(char));
    fgets(nomes[i], 200, nomes_arquivo);
  }

  fclose(nomes_arquivo);

  imprimeReverso(nomes, total);

}