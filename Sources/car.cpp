/////////////////////////////////////////////////////////////////////////////////////
// Vehicle Diagnostics Simulator
// Author: Sunil Kadam
// Last modified on 25 Jan 2025
/////////////////////////////////////////////////////////////////////////////////////

// car.cpp
#include "../Headers/car.h"

Car::Car(std::string make, std::string model, int year, int airbags, bool isElectric)
    : Vehicle(std::move(make), std::move(model), year), airbags(airbags), isElectric(isElectric) {}

void Car::display() const {
    std::cout << "Car: " << make << " " << model << " (" << year << ")\n"
              << "Airbags: " << airbags << ", Electric: " << (isElectric ? "Yes" : "No") << "\n";
}

void Car::performDiagnostics() const {
    std::cout << "Performing diagnostics for Car: " << make << " " << model << "\n";
}
