#include <stdio.h>
#include <stdlib.h>

int N;

int** allocateMem(int N){
    int** preference;
    preference = malloc(2*N*sizeof(*preference));
    for (int i = 0; i < 2*N; i++){
        preference[i] = malloc((N+1)*sizeof(*preference[i]));
    }
    return preference;
}

void freeMem(int** arr){
    for (int i = 0; i <= N; i++){
        free(arr[i]);
    }
    free(arr);
}


int** readInput(){
    scanf("%d", &N);
    printf("%d\n", N);
    int** preference = allocateMem(N);
    for (int i = 0; i < 2*N; i++){
        for (int j = 0; j < N+1; j++){
            scanf("%d", &preference[i][j]);
        }
    }
    return preference;
}

int main(int argc, char** argv){
    int** preference = readInput();
    for (int i = 0; i < 2*N; i++){
        for (int j = 0; j < N+1; j++){
            printf("%d ", preference[i][j]);
        }
        printf("\n");
    }
}