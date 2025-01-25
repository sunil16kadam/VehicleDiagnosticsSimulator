/////////////////////////////////////////////////////////////////////////////////////
// Vehicle Diagnostics Simulator
// Author: Sunil Kadam
// Last modified on 25 Jan 2025
/////////////////////////////////////////////////////////////////////////////////////

// main.cpp
#include "../Headers/car.h"
#include "../Headers/diagnostics_manager.h"
#include "../Headers/file_manager.h"

int main() {
    DiagnosticsManager manager;
    manager.addVehicle(std::make_unique<Car>("Toyota", "Corolla", 2020, 6, false));
    manager.addVehicle(std::make_unique<Car>("Tesla", "Model S", 2022, 8, true));

    std::cout << "\nPerforming Diagnostics:\n";
    manager.performDiagnostics();

    std::cout << "\nSaving diagnostic results to file:\n";
    FileManager::saveToFile("diagnostics.txt", "Toyota Corolla diagnostics: OK\nTesla Model S diagnostics: OK\n");

    std::cout << "\nReading diagnostic results from file:\n";
    FileManager::readFromFile("diagnostics.txt");

    return 0;
}
