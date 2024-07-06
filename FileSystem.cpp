// FileSystem.cpp
#include "FileSystem.h"
#include <fstream>
#include <iostream>

FileSystem::FileSystem() {}

bool FileSystem::createFile(const std::string& filename) {
    std::ofstream ofs(filename);
    if (ofs) {
        std::cout << "File created: " << filename << "\n";
        ofs.close();
        return true;
    } else {
        std::cerr << "Failed to create file: " << filename << "\n";
        return false;
    }
}

bool FileSystem::writeFile(const std::string& filename, const std::string& content) {
    std::ofstream ofs(filename);
    if (ofs) {
        ofs << content;
        std::cout << "Written to file: " << filename << "\n";
        ofs.close();
        return true;
    } else {
        std::cerr << "Failed to write to file: " << filename << "\n";
        return false;
    }
}

bool FileSystem::readFile(const std::string& filename) {
    std::ifstream ifs(filename);
    if (ifs) {
        std::cout << "Reading file: " << filename << "\n";
        std::string content((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
        std::cout << "Content: " << content << "\n";
        ifs.close();
        return true;
    } else {
        std::cerr << "Failed to read file: " << filename << "\n";
        return false;
    }
}

bool FileSystem::deleteFile(const std::string& filename) {
    if (std::remove(filename.c_str()) == 0) {
        std::cout << "File deleted: " << filename << "\n";
        return true;
    } else {
        std::cerr << "Failed to delete file: " << filename << "\n";
        return false;
    }
}
