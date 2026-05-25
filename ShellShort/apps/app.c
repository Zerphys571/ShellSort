#include "include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
  {
  srand(time(NULL));

  int *vetor = NULL;
  int qnt_elementos = 1000;

  vetor = gera_numeros(qnt_elementos);
  printar_resultado(vetor, qnt_elementos);
  printf("\n\n\n\n");

  clock_t start = clock();

  shellSort(vetor, qnt_elementos);

  clock_t end = clock();

  double tempo_processo = ((double)(end - start)) / CLOCKS_PER_SEC;

  printar_resultado(vetor, qnt_elementos);
  printf("\n");
  printf("Tempo da ordenação: %f", tempo_processo);
  liberar_memoria(vetor);

  printf("\n");
  return 0;
  }
