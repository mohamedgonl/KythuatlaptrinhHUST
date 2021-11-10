#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap kich thuoc day: "<<endl;
    cin>> n;
    int a[n];
    cout<< "Nhap cac phan tu cua day"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Cac day con la: "<<endl;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k= i;k<=j;k++)
            cout<<a[k]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}