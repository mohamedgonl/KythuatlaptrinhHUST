#include <stdio.h>
int counteven(int* arr, int size){
    int count = 0;
    for(int i=0; i<size;i++){
        if(*(arr+i)%2==0) count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,4,1,3,2,6};
    printf("%d",counteven(arr,7));
    return 0;
}
