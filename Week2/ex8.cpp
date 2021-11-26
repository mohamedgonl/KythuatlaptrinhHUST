#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int val1, val2;
    cin >> val1 >> val2;
    vector< vector<int> > a = {
            {1, 3, 7},
            {2, 3, 4, val1},
            {9, 8, 15},
            {10, val2},
    };

    //# sắp xếp các vector trong a theo tổng các phần tử giảm dần
    for(int i=0; i<3;i++){
        for(int j=i+1;j<3;j++){
            [=](vector<int> a[]){
                int
                for(int k=0;k<3;k++)
            }
        }
    }

    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}