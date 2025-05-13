#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(){
    int N;
    scanf("%d", &N);
    char operacao[N][4];
    int topo = 0;
    int grau[100];


    for (int i = 0; i < N; i++){
        scanf("%s", operacao[i]);
        if(strcmp(operacao[i], "PUSH") == 0){
            int valor;
            scanf("%d", &valor);
            grau[topo++] = valor;
        }
        else if(strcmp(operacao[i], "POP") == 0){
            if (topo > 0){
                topo--;
            }
            else if (topo == 0){
                printf("EMPTY");
            }
        }
        else if(strcmp(operacao[i], "MIN") == 0){
            if (topo == 0){
                printf("EMPTY");
            } else{
                int menor = INT_MAX;
                for (int j = 0; j < topo; j++){
                    if (grau[j] < menor){
                        menor = grau[j];
                    }
                }
                printf("%d\n", menor);
            }
        }
    }
    return 0;
}
