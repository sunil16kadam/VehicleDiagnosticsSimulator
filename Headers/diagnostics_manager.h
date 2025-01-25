// diagnostics_manager.h
#ifndef DIAGNOSTICS_MANAGER_H
#define DIAGNOSTICS_MANAGER_H

#include "../Headers/vehicle.h"
#include <vector>
#include <memory>

// Class to manage multiple vehicles and diagnostics
class DiagnosticsManager {
    std::vector<std::unique_ptr<Vehicle>> vehicles;

public:
    void addVehicle(std::unique_ptr<Vehicle> vehicle);
    void performDiagnostics() const;
};

#endif // DIAGNOSTICS_MANAGER_H
