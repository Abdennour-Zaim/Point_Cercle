#include "cercle.h"
#include "point.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace geom;
cercle::cercle() {

}
cercle::cercle(double r, point c) {
	this->rayon = r;
	this->centre = c;
}
void cercle::afficher() const {
	cout << "le rayon est : " << this->rayon<<endl;
	cout << "le centre est : ";
	this->centre.afficher();
}
double cercle::surface() const {
	return 3.14 * pow(this->rayon, 2);
}
double cercle::perimetre() const {
	return 3.14 * 2 * this->rayon;
}
void cercle::changement_rayon(double r) {
	this->rayon = r;
}

void cercle::translation(double a,double b) {
	this->centre.translation(a,b);
}

bool cercle::egalité(cercle c) const {

	if (this->rayon == c.rayon && this->centre.egalite(c.centre)) {
		return true;
	}
	else
		return false;
}

bool cercle::appartenance(point a)const {
	if (this->centre.distance(a) <= this->rayon) {
		return true;
	}
	else
		return false;
}



















