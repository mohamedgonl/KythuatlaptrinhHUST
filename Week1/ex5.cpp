#include "stdio.h"
#include "stdlib.h"
double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    for(int i=0; i<size; i++){
        if(*(a+i)>*max) max = (a+i);
    }
    return max;
}
int main(int argc, char const *argv[])
{
    double a[] = {2.4,2.2,2.1,5.3,5.2};
    printf("%lf",*maximum(a,5));
    return 0;
}
