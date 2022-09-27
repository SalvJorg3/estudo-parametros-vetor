#include <stdio.h>

void v_iniciacao(int *vet, int n) {
    int i;
        for (i=0; i<n; i++)
        vet[i]=0; 
}

void v_imprime(int *vet, int n) {
    int I;
    for(I=0; I < n; I++)
    printf(" %d - ", vet[I]);
    printf("\n");
}

   int main(void) {
    int vet[10], i;
    v_iniciacao(vet,10);
    //Impressão após inicialização 
    printf("Impressao do vetor antes da atribuicao.");
    v_imprime(vet,10);
    //Mudando valores do vetor

    for (i=0; i<10; i++) {
        vet[i]=i;
    }
    //Impressão após atribuição
    printf("Impressao do vetor apos atribuicao.");
    v_imprime(vet,10);
   }


 