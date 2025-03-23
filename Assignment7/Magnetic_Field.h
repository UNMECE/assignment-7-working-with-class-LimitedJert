#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

class Magnetic_Field {
private:
    double* B;

public:
    Magnetic_Field();
    Magnetic_Field(double Bx, double By, double Bz);
    ~Magnetic_Field();

    double calculateMagnitude() const;
    double getBx() const;
    double getBy() const;
    double getBz() const;
    void setBx(double Bx);
    void setBy(double By);
    void setBz(double Bz);
    void calculateUnitVector(double unitVector[3]) const;
};

#endif