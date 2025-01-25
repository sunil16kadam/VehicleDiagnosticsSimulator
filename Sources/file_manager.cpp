// file_manager.cpp
#include "../Headers/file_manager.h"

void FileManager::saveToFile(const std::string& filename, const std::string& data) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return;
    }
    outFile << data;
    std::cout << "Data saved to " << filename << " successfully." << std::endl;
}

void FileManager::readFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
}
