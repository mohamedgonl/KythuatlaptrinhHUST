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
    for(unsigned int i=0; i<a.size();i++){
        for(unsigned int j=i+1;j<a.size();j++){
            auto sum =  [=](int i) -> int {
                int sum=0;
                for(unsigned int k=0; k<a[i].size();k++){
                    sum+=a[i][k];
                }
                return sum;
            };
            if(sum(j)>sum(i)) a[i].swap(a[j]);
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