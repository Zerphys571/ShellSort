#include "include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocar_memoria(int *vetor, int qnt_elementos)
  {
  vetor = malloc(qnt_elementos * sizeof(int));
  if (vetor == NULL)
    return NULL;
  return vetor;
  }
int *gera_numeros(int qnt_elementos)
  {
  int *vetor = alocar_memoria(vetor, qnt_elementos);
  for (int i = 0; i < qnt_elementos; i++)
    {
    vetor[i] = rand() % 10000;
    }
  return vetor;
  }

int calcular_h(int qnt_elementos)
  {
  int h = 1;

  while (h < qnt_elementos / 3)
    {
    h = 3 * h + 1;
    }
  return h;
  }

void shellSort(int *v, int qnt_elementos)
  {
  int i, aux, j;
  int h = calcular_h(qnt_elementos);
  while (h > 0)
    {
    for (i = h; i < qnt_elementos; i++)
      {
      aux = v[i];
      j = i;
      while (j >= h && aux < v[j - h])
        {
        v[j] = v[j - h];
        j = j - h;
        }
      v[j] = aux;
      }
    h = (h - 1) / 3;
    }
  }

void bubleSort(int *vetor, int qnt_numeros)
  {
  int aux;
  if (vetor == NULL)
    {
    return;
    }
  for (int i = 0; i < qnt_numeros; i++)
    {
    for (int j = 0; j < qnt_numeros - 1; j++)
      {
      if (vetor[j] > vetor[j + 1])
        {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
        }
      }
    }
  }

void printar_resultado(int *v, int qnt_elementos)
  {
  int i;
  for (i = 0; i < qnt_elementos; i++)
    {
    printf("%d, ", v[i]);
    }
  }

void liberar_memoria(int *vetor) { free(vetor); }
