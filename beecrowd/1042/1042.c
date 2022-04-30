#include <stdio.h>

int main()
{
  int vetor[3];
  int vetorAux[3];
  int indexI;
  int indexJ;

  for (indexI = 0; indexI < 3; indexI++)
  {
    scanf("%d", &vetor[indexI]);
    vetorAux[indexI] = vetor[indexI];
  }

  for (indexI = 0; indexI < 3; indexI++)
  {
    for (indexJ = 0; indexJ < 3; indexJ++)
    {
      if (vetor[indexI] < vetor[indexJ])
      {
        int aux = vetor[indexJ];

        vetor[indexJ] = vetor[indexI];
        vetor[indexI] = aux;
      }
    }
  }

  for (indexI = 0; indexI < 3; indexI++)
  {
    printf("%d\n", vetor[indexI]);
  }
  printf("\n");
  for (indexI = 0; indexI < 3; indexI++)
  {
    printf("%d\n", vetorAux[indexI]);
  }

  return 0;
}