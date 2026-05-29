#ifndef INCLUDE_H
#define INCLUDE_H

// aloca memoria para o vetor
int *alocar_memoria(int *vetor, int qnt_elementos);

// gerar numeros aleatorios
int *gera_numeros(int qnt_elementos);

// calcular o valor do h de intervalos
int calcular_h(int qnt_numeros);

// funcao para fazer o shellSort usando o vetor de numeros e a qnt deles
void shellSort(int *vetor_numeros, int qnt_numeros);

// funcao para ordenar em bubleSort;
void bubleSort(int *vetor, int qnt_numeros);

// funcao para printar o resultado da ordenação
void printar_resultado(int *vetor_numeros, int qnt_numeros);

// liberar memoria
void liberar_memoria(int *vetor);
#endif
