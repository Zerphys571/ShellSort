#include "include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
  {
  srand(time(NULL));

  int *vetor = NULL, *vetor2 = NULL;
  int qnt_elementos = 50000;

  vetor = gera_numeros(qnt_elementos);
  vetor2 = gera_numeros(qnt_elementos);
  printar_resultado(vetor, qnt_elementos);
  printf("\n\n\n\n");

  clock_t start = clock();

  shellSort(vetor, qnt_elementos);

  clock_t end = clock();

  double tempo_processo = ((double)(end - start)) / CLOCKS_PER_SEC;

  printar_resultado(vetor, qnt_elementos);
  printf("\n\n");
  printf("Tempo da ordenação por shell sort: %f", tempo_processo);
  liberar_memoria(vetor);

  printf("\n\n");

  clock_t start2 = clock();

  bubleSort(vetor2, qnt_elementos);

  clock_t end2 = clock();

  double tempo_processo2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;

  printar_resultado(vetor2, qnt_elementos);
  printf("\n");
  printf("Tempo da ordenação por buble sort: %f", tempo_processo2);
  printf("\n");
  liberar_memoria(vetor2);
  return 0;
  }
