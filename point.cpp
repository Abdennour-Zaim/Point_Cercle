#include "point.h"
#include <iostream>
#include<math.h>
using namespace std;
using namespace geom;
point::point() {


}
point::point(double x, double y) {
    this->x = x;
    this->y = y;
}
void point::afficher() const {
    cout << "x= " << this->x;
    cout << "y= " << this->y;
}
double point::distance(const point& b) const {
    double res;
    res = sqrt(pow((b.x - this->x), 2) + pow((b.y - this->y), 2));
    return res;
}

void point::translation(double a,double b) {
    this->x += a;
    this->y += b;
}
bool point::egalite(point b) const {
    if (this->x == b.x && this->y == b.y) {
        return true;
    }
    else
        false;
}
