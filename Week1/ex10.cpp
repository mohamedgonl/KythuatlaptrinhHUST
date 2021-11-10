#include "iostream"
using namespace std;
int** CreatMatrix( int n)
{
    int**pt=new int* [n];
    int* temp=new int [n*n];
    for (int i=0;i<n;i++)
    {
        *(pt+i)=temp;
        temp+=n;
    }
    return pt;
}
int** MultiplyMatrix(int ** A,int** B,int n)
{
    int **C,temp;
    C=CreatMatrix(n);
    int i,j,k;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            temp=0;
            for (k=0;k<n;k++) temp+=A[i][k]*B[k][j];
            C[i][j]=temp;
        }
    return C;
}
int** AddMatrixs(int ** A,int** B,int n){
    int **C;
    C=CreatMatrix(n);
    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    return C;
}
void output(int **mt, int n){
    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; ++j) {
            cout<<mt[i][j]<<" ";
    }
        cout<<endl;
}
}
void input(int **mt, int n){
    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; ++j) {
            cin>>mt[i][j];
        }
    }
}
int main(){
    int n;
    cout<< "Nhap kich thuoc n"<<endl;
    cin>> n;
    int **matrix1=CreatMatrix(n),**matrix2= CreatMatrix(n);
    cout<<"Nhap ma tran 1"<<endl;
    input(matrix1,n);
    cout<<"Nhap ma tran 2"<<endl;
    input(matrix2,n);
    cout<<"2 ma tran vua nhap la:"<<endl<<"Ma tran 1: "<<endl;
    output(matrix1,n);
    cout<<"Ma tram 2: "<<endl;
    output(matrix2,n);
    cout<<"Tong 2 ma tran la"<<endl;
    output(AddMatrixs(matrix1,matrix2,n),n);
    cout<<"Tich 2 ma tran la"<<endl;
    output(MultiplyMatrix(matrix1,matrix2,n),n);
    return 0;
}