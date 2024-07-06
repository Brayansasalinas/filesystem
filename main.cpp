// main.cpp
#include "FileSystem.h"
#include <iostream>
#include <string>

void showMenu() {
    std::cout << "\nFilesystem Menu:\n";
    std::cout << "1. Create a File\n";
    std::cout << "2. Write to a File\n";
    std::cout << "3. Read from a File\n";
    std::cout << "4. Delete a File\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    FileSystem fs;
    int choice;
    std::string filename, content;

    while (true) {
        showMenu();
        std::cin >> choice;
        std::cin.ignore(); // Ignore trailing newline character

        switch (choice) {
            case 1:
                std::cout << "Enter filename to create: ";
                std::getline(std::cin, filename);
                fs.createFile(filename);
                break;
            case 2:
                std::cout << "Enter filename to write to: ";
                std::getline(std::cin, filename);
                std::cout << "Enter content to write: ";
                std::getline(std::cin, content);
                fs.writeFile(filename, content);
                break;
            case 3:
                std::cout << "Enter filename to read: ";
                std::getline(std::cin, filename);
                fs.readFile(filename);
                break;
            case 4:
                std::cout << "Enter filename to delete: ";
                std::getline(std::cin, filename);
                fs.deleteFile(filename);
                break;
            case 5:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cerr << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
