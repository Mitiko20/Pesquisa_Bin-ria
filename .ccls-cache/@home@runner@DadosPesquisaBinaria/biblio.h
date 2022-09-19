int buscabinaria(int tamanho, int* v, int n) {
  int inicio = 0;
  int fim = tamanho-1;
  int meio;

  while(inicio <= fim){
    meio = (inicio + fim)/2;
    if(n < v[meio]){
      fim = meio - 1;
    }
    else if(n > v[meio]){
      inicio = meio + 1;
    }
    else return meio;
  } 
  return -1;
}