#include <iostream>
using namespace std;
template <typename T1>
T1 arr_sum (T1 (x1)[], int x2, T1 (x3)[], int x4){
    T1 sum=0;
    for(int i=0;i<4;i++){
        sum+=x1[i];
    }
    for(int i=0;i<5;i++){
        sum+=x3[i];
    }
    return sum+x2+x4;
}

int main() {
    int val;
    cin >> val;
    {
        int a[] = {3, 2, 0, val};
        int b[] = {5, 6, 1, 2, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    {
        double a[] = {3.0, 2, 0, val * 1.0};
        double b[] = {5, 6.1, 1, 2.3, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    return 0;
}