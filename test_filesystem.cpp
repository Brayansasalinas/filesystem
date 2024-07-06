// test_filesystem.cpp
#include "catch_amalgamated.hpp"
#include "FileSystem.h"
#include <fstream>
#include <iostream>

TEST_CASE("File creation and existence check", "[FileSystem]") {
    FileSystem fs;
    std::string filename = "testfile.txt";

    SECTION("Create a file and check existence") {
        REQUIRE(fs.createFile(filename) == true);

        std::ifstream ifs(filename);
        REQUIRE(ifs.good() == true);

        ifs.close();
    }

    SECTION("Create a file that already exists") {
        REQUIRE(fs.createFile(filename) == true); // First creation
        REQUIRE(fs.createFile(filename) == false); // Second creation should fail
    }
}

TEST_CASE("Reading and writing to a file", "[FileSystem]") {
    FileSystem fs;
    std::string filename = "testfile.txt";
    std::string content = "This is a test content.";

    SECTION("Write to a file and read back") {
        REQUIRE(fs.writeFile(filename, content) == true);

        std::string readContent;
        REQUIRE(fs.readFile(filename, readContent) == true);
        REQUIRE(readContent == content);
    }

    SECTION("Write to a file that doesn't exist") {
        REQUIRE(fs.writeFile("nonexistent.txt", content) == false);
    }
}

TEST_CASE("Deleting a file", "[FileSystem]") {
    FileSystem fs;
    std::string filename = "testfile.txt";
    std::string content = "File content.";

    // Create a file first
    REQUIRE(fs.createFile(filename) == true);

    SECTION("Delete an existing file") {
        REQUIRE(fs.deleteFile(filename) == true);
    }

    SECTION("Delete a non-existent file") {
        REQUIRE(fs.deleteFile("nonexistent.txt") == false);
    }
}
