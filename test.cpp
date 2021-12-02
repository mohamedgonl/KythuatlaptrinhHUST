#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
//const long long MAX = 100005;
//int n,c;
//long long x[MAX],res;
//void input(){
//    cin >> n >> c;
//    for(long long i=0; i<n; i++){
//        cin >> x[i];
//    }
//    sort(x,x+n);
//    res = 0;
//}
//bool check(long long d){
//    int tmp =1, cmt=1;
//    for(int i=2; i<=n;i++){
//        if(x[tmp]+d<=x[i]) tmp=i; cmt++;
//    }
//    if(cmt >=c ) return  true;
//    return false;
//}
//int cnp(){
//    long long mid, l=1,r=x[n],ans=0;
//    while(l<=r){
//        if(check(mid)) l=mid+1,ans=mid;
//        else r = mid-1;
//    }
//    return ans;
//}
//int main(){
//    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//    long long t;
//    cin>>t;
//    while(t>0){
//        input();
//        cout<<cnp();
//        t--;
//    }
//
//}

//void proc2(){
//    fn1 = '1', l1=1;
//    fn2='0',l2=1;
//    for(int i=2;i<=n;i++){
//        for(int j=1;j<=11;j++) fn[j]=fn1[j];
//        for(int j=12;j<11+12;j++) fn[j]=fn2[j-11];
//        res = res1+res2;
//        for(int j=11-m+2;j<=11-1;j++){
//            bool check=true;
//            for(int k=1; k<=m; k ++){
//                if(p[k]!=fn[j+k]) {
//                    check = false;
//                    break;
//                }
//            } if(check) ++res;
//        }
//        res2=res1, res1=res;
//        for(int j=1;j<=11;j++) fn2[j]=fn1[j];
//        for(int j=1;j<=11;j++) fn1[j]=fn[j];
//        l2=11,l1=1;
//    }
//}
const string fb0 = "0", fb1="1";
int n;
string p;
int save[100];
int checkmid(){

}
void Fibo(int k){
    if(k==0) return 1;
}
int proc(int n){
    if(save[n]) return save[n];
    else {
        int mid = checkmid();
        return mid + proc(n-1)+proc(n-2);
    }
}
int main(){
    cin >> n>> p;
    int len = p.length();
}
