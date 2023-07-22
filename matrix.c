#include <stdio.h>
#include "multiply.c"

int main()
{
    int A[3][3] = {{2 , 3 , 4},
                    {3 , 7 , 5},
                    {1 , 3 , 2}};

    int B[3][3] = {{3 , 4 , 1},
                    {5 , 2 , 4},
                    {3 , 8 , 6}};

    int C[3][3];

printf("Answer of A x B : \n");
    koon(A , B , C);

printf("Answer of B x A : \n");
    koon(B , A , C);

return 0;
}

