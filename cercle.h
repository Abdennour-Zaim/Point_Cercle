#pragma once
#include"point.h"
namespace geom {
class cercle
{
private:
    double rayon;
    point centre;
    
public:
    cercle();
    cercle(double r, point c);
    void afficher() const;
    double surface() const;
    double perimetre() const;
    void changement_rayon(double r);
    void translation( double a,double b);
    bool egalité(cercle c) const;
    bool appartenance(point a) const;
    
};
};

