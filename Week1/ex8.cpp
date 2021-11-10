#include <stdio.h>
#include "cstdlib"

void allocate_mem(int ***mt, int m, int n){
    int** pnt = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        pnt[i] = (int *)malloc(n * sizeof(int));
    }
    *mt= pnt;

}


void input(int **mt, int m, int n){
    //#Input elements of the matrix

    for(int i=0;i<m;i++)
        for (int j = 0; j < n; ++j) {
            printf("mt[%d][%d] = ",i,j);
            scanf("%d",*(mt+i)+j);
        }
}

void output(int **mt, int m, int n){

    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",*(*(mt + i) + j)) ;       } printf("\n");
    }


}

int process(int **mt, int m, int n){
    int tong = 0;
    for(int i=0;i<m;i++)
        for (int j = 0; j < n; ++j) {
            if((int)(*(*(mt+i)+j))%2==0) tong+=(int)(*(*(mt+i)+j));
        }


    return tong;
}

void free_mem(int **mt, int m, int n){
    for(int i=0;i<m;i++){
        free(*(mt+i));
    }
    free(mt);
}

int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}