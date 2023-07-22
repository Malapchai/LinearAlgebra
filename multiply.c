#include <stdio.h>

static void koon(int A[3][3] , int B[3][3] , int C[3][3]){

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            C[i][j] = 0;
            for(int k = 0 ; k < 3 ; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 3; n++) {
            printf("%d ", C[m][n]);
        }
        printf("\n");
    }
}