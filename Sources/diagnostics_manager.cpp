// diagnostics_manager.cpp
#include "../Headers/diagnostics_manager.h"

void DiagnosticsManager::addVehicle(std::unique_ptr<Vehicle> vehicle) {
    vehicles.push_back(std::move(vehicle));
}

void DiagnosticsManager::performDiagnostics() const {
    for (const auto& vehicle : vehicles) {
        vehicle->performDiagnostics();
    }
}
