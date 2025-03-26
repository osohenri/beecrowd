#include <stdio.h>
#include <string.h>

const int MAX = 100;

int  main(){
    int n;
    scanf("%d", &n);
    char lingua[n][MAX], traducao[n][MAX];

    for(int i = 0; i < n; i++){
        scanf("%s", lingua[i]);
        scanf(" %[^\n]%*c", traducao[i]);
    }

    int m;
    scanf("%d", &m);
    char nome[m][MAX], nativa[m][MAX];


    for(int i = 0; i < m; i++){
        scanf(" %[^\n]%*c", nome[i]);
        scanf("%s", nativa[i]);
    };

    for (int i = 0; i < m; i++){
        printf("%s\n", nome[i]);

        int j = 0;
        int x = 0;

        while(j < n && !x) {
            if(strcmp(nativa[i], lingua[j]) == 0) {
                printf("%s\n\n", traducao[j]);
                x = 1;
            }
            j++;
        }
    }
return 0;
}
