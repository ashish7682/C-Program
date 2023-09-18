//--------------program using calloc-----------
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *fptr;
    fptr = (float *)calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", fptr[i]);
    }
    return 0;
}