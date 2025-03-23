#include "Magnetic_Field.h"
#include <cmath>

Magnetic_Field::Magnetic_Field() {
    B = new double[3]{0.0, 0.0, 0.0};
}

Magnetic_Field::Magnetic_Field(double Bx, double By, double Bz) {
    B = new double[3]{Bx, By, Bz};
}

Magnetic_Field::~Magnetic_Field() {
    delete[] B;
}

double Magnetic_Field::calculateMagnitude() const {
    return sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
}

double Magnetic_Field::getBx() const { return B[0]; }
double Magnetic_Field::getBy() const { return B[1]; }
double Magnetic_Field::getBz() const { return B[2]; }

void Magnetic_Field::setBx(double Bx) { B[0] = Bx; }
void Magnetic_Field::setBy(double By) { B[1] = By; }
void Magnetic_Field::setBz(double Bz) { B[2] = Bz; }

void Magnetic_Field::calculateUnitVector(double unitVector[3]) const {
    double magnitude = calculateMagnitude();
    if (magnitude != 0) {
        unitVector[0] = B[0] / magnitude;
        unitVector[1] = B[1] / magnitude;
        unitVector[2] = B[2] / magnitude;
    } else {
        unitVector[0] = 0.0;
        unitVector[1] = 0.0;
        unitVector[2] = 0.0;
    }
}