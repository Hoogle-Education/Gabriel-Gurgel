#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXVALORES 110

void converteNome(char* cidade) {

  if (*cidade == '\0') return;  
  if(*cidade == ' ') *cidade = '_';

  return converteNome(cidade + 1);
}

FILE* openFile(const* char file, const char* mode ) {
  FILE* _file = fopen(file, mode);

  if ( dadosEntrada == NULL ) {
     puts("Não foi possível achar o arquivo!");
     return;
  }

  puts("O arquivo foi aberto!");
  return file;
}

void extraiDados(char nomeDaCidade[]) {
  
  FILE* dados_entrada = openFile("RioDeJaneiro.txt", "r");
  char* linha = malloc(200 * sizeof(char));
  bool first = true;

  while( !feof(dados_entrada) ) {
    fgets(linha, MAXVALORES, dadosEntrada);
   
    if(first) {
      nomeDaCidade = strtok(linha, ":");
      converteNome(nomeDaCidade);
      first = false;
      continue;
    }

    int quantidade_leituras;
    int* leituras;
    
    char* token = strtok(linha, ", ");
    token = strtok(NULL, " leituras");

    quantidade_leituras = atoi(token);
    token = strtok(NULL, " :");

    printf("Quantidade = %d\n", quantidade_leituras);
    puts(token);

  }

}

int main(int argc, char const *argv[])
{
  char nomeDaCidade[] = "";
  extraiDados(nomeDaCidade);
  
  return 0;
}
