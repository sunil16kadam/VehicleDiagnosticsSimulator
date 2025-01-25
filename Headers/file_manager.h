// file_manager.h
#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <string>
#include <fstream>
#include <iostream>

// Class to handle file operations
class FileManager {
public:
    static void saveToFile(const std::string& filename, const std::string& data);
    static void readFromFile(const std::string& filename);
};

#endif // FILE_MANAGER_H
