#include "iostream"
using namespace std;
int main(){
    int n,m;
    cin>>n;

    int Ax[n+1];
    for(int i=0;i<=n;i++){
        cin>>Ax[i];
    }
    cin>> m;
    int Bx[m+1];
    int res[n+m+1];
    for(int i=0;i<=m;i++){
        cin>>Bx[i];
    }
    res[0]=Ax[0]*Bx[0];
    int ans= res[0];

    for(int i=1;i<=m+n;i++){
        res[i]=0;
        for(int j=0;j<=i;j++){
            if(j<=n&&(i-j)<=m)
                res[i]+=Ax[j]*Bx[i-j];
        }
        ans^=res[i];
    }
    for(int i=0;i<=n+m;i++){
        cout<<"["<<i<<"]: "<<res[i]<<"-";
    }
    cout<< ans;
    return 0;
}