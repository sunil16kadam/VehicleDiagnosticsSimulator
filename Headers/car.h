// car.h
#ifndef CAR_H
#define CAR_H

#include "../Headers/vehicle.h"

// Concrete class representing a Car
class Car : public Vehicle {
    int airbags;
    bool isElectric;

public:
    Car(std::string make, std::string model, int year, int airbags, bool isElectric);

    void display() const override;
    void performDiagnostics() const override;
};

#endif // CAR_H
