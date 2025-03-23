#include "Electric_Field.h"
#include <cmath>

Electric_Field::Electric_Field() {
    E = new double[3]{0.0, 0.0, 0.0};
}

Electric_Field::Electric_Field(double Ex, double Ey, double Ez) {
    E = new double[3]{Ex, Ey, Ez};
}

Electric_Field::~Electric_Field() {
    delete[] E;
}

double Electric_Field::calculateMagnitude() const {
    return sqrt(E[0] * E[0] + E[1] * E[1] + E[2] * E[2]);
}

double Electric_Field::getEx() const { return E[0]; }
double Electric_Field::getEy() const { return E[1]; }
double Electric_Field::getEz() const { return E[2]; }

void Electric_Field::setEx(double Ex) { E[0] = Ex; }
void Electric_Field::setEy(double Ey) { E[1] = Ey; }
void Electric_Field::setEz(double Ez) { E[2] = Ez; }

double Electric_Field::calculateInnerProduct(const Electric_Field& other) const {
    return E[0] * other.getEx() + E[1] * other.getEy() + E[2] * other.getEz();
}