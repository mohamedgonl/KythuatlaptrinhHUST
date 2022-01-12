#include <iostream>
using namespace std;
int a1=2,a2=3;
int*a=&a1,*b=&a2;
void sw(int *a, int *b) {
    cout<<*a<<*b<<" ";
    *a ^=*b;
    cout<<*a<<*b<<" ";
    *b ^=*a;
    cout<<*a<<*b<<" ";
    *a ^=*b;
    cout<<*a<<*b<<" ";
}
int main(){
    sw(a,b);
}