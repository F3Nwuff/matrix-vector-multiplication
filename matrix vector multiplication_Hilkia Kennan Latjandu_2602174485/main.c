#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include <time.h>

int main(){

    srand(time(0));

    int N = 3;
    int* M = (int *) malloc(N*N*sizeof(int));
    int* v = (int *) malloc(N*sizeof(int));
    int* b = (int *) malloc(N*sizeof(int));

    if(M == NULL | v == NULL){
        printf("Malloc is failed \n");
        exit(0);
    } else {
        initMat(M, N);
        printf("M=");
        printMat(M, N);
        initVec(v, N);
        printf("v=");
        printVec(v, N);
        matVecMult(M,v,b,N);
        printf("b=");
        printVec(b, N);
    }

    free(M);
    free(v);
    free(b);

    return 0;
}
