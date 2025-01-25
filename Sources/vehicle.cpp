// vehicle.cpp
#include "../Headers/vehicle.h"

Vehicle::Vehicle(std::string make, std::string model, int year)
    : make(std::move(make)), model(std::move(model)), year(year) {}
