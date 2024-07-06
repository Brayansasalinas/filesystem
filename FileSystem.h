// FileSystem.h
#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include "File.h"
#include <string>
#include <unordered_map>

class FileSystem {
public:
    FileSystem();

    bool createFile(const std::string& filename);
    bool writeFile(const std::string& filename, const std::string& content);
    bool readFile(const std::string& filename);
    bool deleteFile(const std::string& filename);

private:
    std::unordered_map<std::string, File> files;
};

#endif // FILESYSTEM_H
