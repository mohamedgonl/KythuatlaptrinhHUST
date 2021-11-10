#include <stdio.h>
#include <cstdlib>
#include "algorithm"

int *a;
int n, tmp;

int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (int*) malloc(n*sizeof (int));

    for(int i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    //#Sort array

    std::sort(a,a+n);

    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    delete [] a;
    return 0;
}