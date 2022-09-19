//Estrutura de dados
#include <stdio.h>
#include<stdlib.h>

int buscabinaria(int tamanho, int* vetor, int n) {
  int inicio = 0;
  int fim = tamanho-1;
  int meio;

  while(inicio <= fim){
    meio = (inicio + fim)/2;
    if(n < vetor[meio]){
      fim = meio - 1;
    }
    else if(n > vetor[meio]){
      inicio = meio + 1;
    }
    else return meio;
  } 
  return -1;
}

int main(void) {
  int vetor[10] = {8, 18, 36, 40, 50, 72, 80, 83, 85, 88};
  int numero;
  
  int tamanho = sizeof(vetor)/sizeof(int);
  printf("Número que você deseja buscar: \n");
  scanf("%d", &numero);
  
  printf("O número que se deseja buscar é de ocorrência: %d \n", buscabinaria(tamanho, vetor, numero)+1);
  
  return 0;
}