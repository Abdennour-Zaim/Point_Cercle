#pragma once
namespace geom {
    class point
    {
    private:
        double x;
        double y;
    public:
        point();
        point(double x, double y);
        void afficher() const;
        double distance(const point& b) const;
        void translation(double a,double b);
        bool egalite(point b) const;
    };
}


