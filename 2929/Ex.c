#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(){
    int N;
    scanf("%d", &N);
    char operacao[N];
    int topo = 0;
    int grau[100];
    char saida[N][20];
    int nsaida = 0;

    for (int i = 0; i < N; i++){
        scanf("%s", operacao);
        if(strcmp(operacao, "PUSH") == 0){
            int valor;
            scanf("%d", &valor);
            grau[topo++] = valor;
        }
        else if(strcmp(operacao, "POP") == 0){
            if (topo > 0){
                topo--;
            }
            else{
                sprintf(saida[nsaida++], "EMPTY");
            }
        }
        else if(strcmp(operacao, "MIN") == 0){
            if (topo == 0){
                sprintf(saida[nsaida++], "EMPTY");
            } else{
                int menor = INT_MAX;
                for (int j = 0; j < topo; j++){
                    if (grau[j] < menor){
                        menor = grau[j];
                    }
                }
                sprintf(saida[nsaida++], "%d", menor);
            }
        }
    }

    for (int i = 0; i < nsaida; i++){
        printf("%s\n", saida[i]);
    }
    return 0;
}
