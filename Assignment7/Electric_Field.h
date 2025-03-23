#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

class Electric_Field {
private:
    double* E;

public:
    Electric_Field();
    Electric_Field(double Ex, double Ey, double Ez);
    ~Electric_Field();

    double calculateMagnitude() const;
    double getEx() const;
    double getEy() const;
    double getEz() const;
    void setEx(double Ex);
    void setEy(double Ey);
    void setEz(double Ez);
    double calculateInnerProduct(const Electric_Field& other) const;
};

#endif