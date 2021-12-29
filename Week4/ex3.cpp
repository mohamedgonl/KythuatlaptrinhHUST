#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
using Vector = tuple<double, double, double>;

Vector cross_product(Vector a, Vector b) {
    double x = (get<1>(a)*get<2>(b) - get<1>(b)*get<2>(a));
    double y = (get<2>(a)*get<0>(b) - get<0>(a)*get<2>(b));
    double z = (get<0>(a)*get<1>(b) - get<0>(b)*get<1>(a));
    return {x,y,z};
}
