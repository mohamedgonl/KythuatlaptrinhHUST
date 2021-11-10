#include "iostream"
using namespace std;
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;

    for(int i=l; i<size/2;i++){
        tmp = arr[i];
        arr[i] = arr[r-i];
        arr[r-i] = tmp;
    }
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;

    for(int i=l; i<size/2;i++){
        tmp = *(arr+i);
        *(arr+i) = *(arr+r-i);
        *(arr+r-i) = tmp;
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {3,4,2,1,3,4};
    reversearray(a,6);
    cout<<"Chuoi sau khi dao nguoc la: ";
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Dao nguoc lai bang cach 2: ";
    ptr_reversearray(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
